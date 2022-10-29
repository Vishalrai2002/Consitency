class Solution {
    
    // compartor function 
    static bool comp(pair<int,int>p1,pair<int,int>p2){
        return p1.second>p2.second; 
    }
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n=plantTime.size();
        vector<pair<int,int>>v; // make a pair of vector to store both vector 
        
        int ans=0;
        int start=0;
        
        for(int i=0;i<n;i++){
            v.push_back({plantTime[i],growTime[i]}); // pushed plant time and grow time
        }
// it is a gready approch whose plant time is more we have to plant it first because in the meanwhlie other got plant our 1st palnt is bloom to do so we sort using the compartor 
        sort(v.begin(),v.end(),comp); // sort using the compartor
        // for(auto it:v){
        //     cout<<it.first<<"  "<<it.second<<endl;
        // }
        // cout<<endl;
        for(int i=0;i<n;i++){
            start+=v[i].first; // first add the plant time in start 
            ans=max(ans,start+v[i].second); // then add the max of grow time in our start 
        }
        return ans; // then finally return our answer
    }
};
