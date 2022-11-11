class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
// // Mine Approach
      int n=nums.size(); // find the size of the nums vector
        set<int>st; // declared a set
        
        // here below i insert in set to get all unique value in sorted order
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        nums.clear(); // then i simply clear my set
        
        for(auto it:st){ // iterate over the set
            nums.push_back(it); // now pushed all the unique values in the nums vector 
                                // becuase judge check our nums vector only
        } 
        int k=nums.size(); // find the size of new nums vector 
        
        return k; // and finaly return the size of nums
        
        
        // 2nd Approach 
        
//         int ans=1;
//         for(int i=1;i<nums.size();i++){
//             if(nums[i-1]!=nums[i]){ 
//                 nums[ans]=nums[i];
//                 ans++;
//             }
            
//         }
//         return ans;

        
        // That's it ThankYou for watching this solution 
    } 
};
