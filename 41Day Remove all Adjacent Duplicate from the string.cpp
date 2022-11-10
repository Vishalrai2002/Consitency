class Solution {
public:
    string removeDuplicates(string s) {
        string ans=""; // make a ans string to store answer
        int n=s.size(); // find the size of the string 
        stack<char>st; // declared a stack
        
        for(int i=0;i<n;i++){ // iterate over a string 
            if(st.empty()){ // firstly we have to push our first element
                st.push(s[i]);
                continue;
            }
            if(st.top()==s[i]){ // chech it top and s[i] equal if equal the pop it out 
            while(!st.empty() and st.top()==s[i]){
                st.pop();
            }
            }
            else{ // otherwise push it out in the stack
            st.push(s[i]);
            }
        }
        while(!st.empty()){ // iteratee over a stack 
            // cout<<st.top()<<" ";
            ans.push_back(st.top()); // push back in the answer string 
            st.pop();
        }
        // cout<<endl;
        reverse(ans.begin(),ans.end()); // revese our ans string 
        
        return ans; // finally return our answer 
        
        
        
        // HOpe you understand the solution clearyl......
    }
};
