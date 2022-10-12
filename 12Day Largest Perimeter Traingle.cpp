class Solution {
    // Vishal Rai
public:
    int largestPerimeter(vector<int>& nums) {
        
        sort(nums.begin(),nums.end()); // Firstly I sort here so that i am able to get max at last                                        // in sorted way
        int p=0;
        for(int i=nums.size()-1;i>=2;i--){
            
            if(nums[i]<nums[i-1]+nums[i-2]){ // check if it possible 
                p=nums[i]+nums[i-1]+nums[i-2]; // if possible then break;
                break;
            }
        }
        return p; // return ans
    }
};
