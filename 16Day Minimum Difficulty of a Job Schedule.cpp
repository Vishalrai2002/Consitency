int dp[301][11];
class Solution {
public:
    int solve(vector<int>&jobd,int n,int i,int d){
        // base case
        if(d==1){
            return *max_element(jobd.begin()+i,jobd.end());
        }
        if(dp[i][d]!=-1){
            return dp[i][d];
        }
        
        int result=INT_MAX; // because i have to find the minimum ans
        int curD=INT_MIN; // because i have to find the max in ith day
        
        for(int j=i;j<=n-d;j++){ // n-d because i have to task for all the days given
            curD=max(curD,jobd[j]); // find the max
            result=min(result,curD+solve(jobd,n,j+1,d-1)); // recursive case
        } 
            dp[i][d]=result; // store ans in dp
        // return result; 
        return dp[i][d]; // then return our answer
    }
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        memset(dp,-1,sizeof(dp));
        int n=jobDifficulty.size();
        if(n<d) return -1;
       return solve(jobDifficulty,n,0,d);
    }
};
