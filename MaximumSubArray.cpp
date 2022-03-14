/*
* Cade Weiskopf
* Runtime: 105 ms, faster than 85.55% of C++ online submissions for Maximum Subarray.
* Memory Usage: 67.8 MB, less than 54.69% of C++ online submissions for Maximum Subarray.
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSubSum = nums[0];
        int currentSum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (currentSum < 0) {
                currentSum = 0;
            }
            currentSum += nums[i];
            maxSubSum = std::max(maxSubSum, currentSum);
        }
        
        return maxSubSum;
    }
};
