class Solution {
    
    int dfs(int i,int j,vector<vector<int>>&grid){
        // base case
        if(i>=grid.size()){
            return j;
        }
        
        // Recursive Case
        
        // Left to Right
        if(grid[i][j]==1 and j+1<grid[0].size() and grid[i][j+1]==1){
            return dfs(i+1,j+1,grid);
        }
        
        // Right to Left
        if(grid[i][j]==-1 and j-1>=0 and grid[i][j-1]==-1){
            return dfs(i+1,j-1,grid); 
        }
        
        else if(grid[i][j]==1 and j+1>=grid[0].size()){
            return -1;
        }
        else {
            return -1;
        }
    }
    
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int row=grid.size(); // find the row size
        int col=grid[0].size(); // find the col size
        
        vector<int>ans(col); // ans vector to stroe our answer
        for(int j=0;j<col;j++){ // iterave over loop and filled our ans vector
            
            ans[j]=dfs(0,j,grid);// call the dfs recrusice function
            
        }
        return ans; // return our ans vector
    }
};
