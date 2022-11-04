class Solution {
    // Function to check whether it is a vowel or not
    bool VowelHai(char ch){
        char allchar=tolower(ch); // convert all the upppercase to lowercase if they come
        if(allchar=='a' or allchar=='e' or allchar=='i' or allchar=='o' or allchar=='u'){
            return true;
        }
        return false;
    }
public:
    string reverseVowels(string s) {
        // if(s.size()==0){
        //     return s;
        // }
        int n=s.size();
        // maintain two pointer i and j
        int i=0;
        int j=n-1;
        while(i<j){
            bool isVowelLeft=VowelHai(s[i]); // check for left side vowel
            bool isVowelRight=VowelHai(s[j]); // check for right side vowel
            if(isVowelLeft and isVowelRight){ // if both vowel swap and do i++ and j--
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!isVowelLeft){ // if left not vowel increment it 
                i++;  
            }
            else{ // else decrement 
                j--;
            }
        }
        return s; //return our final string as an output
    }
};
