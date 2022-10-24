class Solution {
    
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second==2){
                ans.push_back(it.first);
            }
        }
        int sum=0;
        int mainsum=0;
        for(int i=1;i<=n;i++){
            mainsum+=i;
        }
        // cout<<mainsum<<endl;
        set<int>st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto it:st){
            sum+=it;
        }
        // cout<<sum<<endl;
        // cout<<ans[0]<<endl;
        ans.push_back(mainsum-sum);
        
        return ans;
    }
};
