/*
Given an integer array nums, return true if there exists a triple of indices (i, j, k) such that i < j < k and nums[i] < nums[j] < nums[k]. If no such indices exists, return false.

 

Example 1:

Input: nums = [1,2,3,4,5]
Output: true
Explanation: Any triplet where i < j < k is valid.
Example 2:

Input: nums = [5,4,3,2,1]
Output: false
Explanation: No triplet exists.
*/

class Solution {
public:
    bool increasingTriplet(vector<int>& arr) {
    int n=arr.size();
        if(n<3) return false; // if your array size is less than 3 no triplets form return false
        
        int left=INT_MAX;
        int mid=INT_MAX;
        for(auto it:arr){ 
            if(it<=left){ // if left less than than change your left with it
                left=it;
            }
            else if(it<=mid){ // if mid less than change your mid with it
                mid=it;
            }
            else { // if you it is greater than your left and mid then definety be a triplet // // possible so, directly return true 
                return true;
            }
        }
        return false;
    }
};
