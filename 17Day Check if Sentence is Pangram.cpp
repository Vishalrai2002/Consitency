class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        // First Approach
            set<char>st;
        for(int i=0;i<sentence.size();i++){
            st.insert(sentence[i]);
        }
        if(st.size()!=26) return false; // check size if not 26 the return false
        return true;
        
        
        // Second Approach
      
//         set<char>st;// make a set of char type
//         for(int i=0;i<sentence.size();i++){
//             st.insert(sentence[i]); // i insert all the character in set so that they come
//                                    // in sorted order with no duplicate
//         }
//         string s;
//         for(auto it:st){
//             s+=it; // push all char of set in string s
//         }
//         // cout<<endl;
//         // cout<<s<<endl;
//         string ans="abcdefghijklmnopqrstuvwxyz"; // make a ans string to compare
        
//         if(s==ans){ // if equal return true
//             return true;
//         }
//         return false; // otherwise return false
        
      
        
    
        
        
        
    }
};
