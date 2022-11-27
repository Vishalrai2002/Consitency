// Problem Link -> https://leetcode.com/problems/maximum-profit-in-job-scheduling/

class Solution {
    
    int f(int i,vector<vector<int>>&job,vector<int>&st,int n,vector<int>&dp){
        // base case
        if(i>=n){
            return 0;
        }
        // Lookup step for Memoization 
        if(dp[i]!=-1){
            return dp[i];
        }
        // here below i find the lower bound like i take range from (1---3)
        // then i take job from 3 or >3 means lower bound of 3 so that's why
        // and i do -st.begin() because to get the idx 
        int index=lower_bound(st.begin(),st.end(),job[i][1])-st.begin();
        int pick=job[i][2]+f(index,job,st,n,dp); // if choose then add profit and start from next index(or lowerbound)
        int notPick=f(i+1,job,st,n,dp); // if not choose then start form i+2 without adding the profit 
        return dp[i]=max(pick,notPick); // return max
    }
    
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
     int n=startTime.size();
        vector<vector<int>>job;
        vector<int>dp(n+1,-1); // 1D dp because i varialbe only change
        for(int i=0;i<n;i++){
            job.push_back({startTime[i],endTime[i],profit[i]}); 
            // at (0 idx -- st[i]) (1 idx -- e[i]) (2 idx -- profit)
        }
        sort(job.begin(),job.end());
        sort(startTime.begin(),startTime.end());
        return f(0,job,startTime,n,dp);
    }
};
