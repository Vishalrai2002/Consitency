class Solution {
public:
   bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size(); // Find the row size
        int n=matrix[0].size(); // find the coln size
        
        for(int i=1;i<m;i++){ // to iteratre over rows
            for(int j=1;j<n;j++){ // to iteratre over cols
                if(matrix[i-1][j-1]!=matrix[i][j]){ // check if top left is not equal then // return false
                    return false;
                }
            }
        }
       // Otherwise return true
        return true;
    }
};
