/*
Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.

Return the sum of the three integers.

You may assume that each input would have exactly one solution.

 

Example 1:

Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
Example 2:

Input: nums = [0,0,0], target = 1
Output: 0
Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).
*/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int diff=INT_MAX;
        int ans=0;
        for(int i=0;i<n;i++){
            int f=nums[i];
            int s=i+1;
            int e=n-1;
            while(s<e){
                if(f+nums[s]+nums[e]==target){
                    return target;
                }
                else if(abs(f+nums[s]+nums[e]-target)<diff){
                    diff=abs(f+nums[s]+nums[e]-target);
                    ans=f+nums[s]+nums[e];
                }
                if(f+nums[s]+nums[e]<target) s++;
                else e--;
            }
        }
        return ans;
        
    }
};
