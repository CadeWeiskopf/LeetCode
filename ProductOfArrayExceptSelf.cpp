/*
* Cade Weiskopf
* Runtime: 30 ms, faster than 60.29% of C++ online submissions for Product of Array Except Self.
* Memory Usage: 25 MB, less than 42.16% of C++ online submissions for Product of Array Except Self.
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        int prefix = 1;
        int postfix = 1;
        
        for(int i = 0; i < nums.size(); i++) {
            output.push_back(prefix);
            prefix *= nums[i];
        }
        
        for(int i = nums.size(); i-- > 0;) {
            output[i] = postfix * output[i];
            postfix *= nums[i];
        }
        
        return output;
    }
};
