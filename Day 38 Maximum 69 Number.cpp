class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num); // converted number to string
        for(int i=0;i<s.size();i++){ // iterare over a string
            if(s[i]=='6'){ // if you got 1st 6 then replace it with 9 
                s[i]='9';
                break; // and then break it becuase you only have to replace 1st 6 to get the max number
            }
        }
        int ans=stoi(s); // convert our string to int 
        return ans; // then simply return our ans
    }
};
