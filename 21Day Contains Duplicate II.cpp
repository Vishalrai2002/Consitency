
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& arr, int k) {
//         int n=arr.size();
//        map<int,vector<int>>mp;
//     for(int i=0;i<n;i++){
//         mp[arr[i]].push_back(i);
//     }
//     for(auto it:mp){
//         // cout<<it.first<<" ";
//         if(it.second.size()>1){
            
//             for(int i=0; i<it.second.size()-1; i++){
//                 if(abs(it.second[i]- it.second[i+1])<=k) return 1;
//             }
//         }
//         // cout<<endl;
//     }

//     return false;
        
        unordered_map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(mp.find(arr[i])!=mp.end()){
                if(i-mp[arr[i]]<=k){
                    return true;
                }
            }
            mp[arr[i]]=i;
            
        }
        return false;
    }
};
