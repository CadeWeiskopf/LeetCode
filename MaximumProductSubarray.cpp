/*
* Cade Weiskopf
* Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximum Product Subarray. lol??
* Memory Usage: 13.8 MB, less than 27.09% of C++ online submissions for Maximum Product Subarray.
*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd = *std::max_element(nums.begin(), nums.end());
        int currentMax = 1;
        int currentMin = 1;
        
        std::cout << maxProd;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                currentMax = 1;
                currentMin = 1;
                continue;
            }
            
            int temp = currentMax * nums[i];
            currentMax = std::max(temp, nums[i] * currentMin);
            currentMax = std::max(currentMax, nums[i]);
            
            currentMin = std::min(temp, nums[i] * currentMin);
            currentMin = std::min(currentMin, nums[i]);
            
            maxProd = std::max(maxProd, currentMax);
        }
        
        return maxProd;
    }
};
