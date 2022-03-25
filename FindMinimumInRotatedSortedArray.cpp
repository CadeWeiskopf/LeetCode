/*
* Cade Weiskopf
* Runtime: 0 ms, faster than 100.00% of C++ online submissions for Find Minimum in Rotated Sorted Array.
* Memory Usage: 10.1 MB, less than 95.52% of C++ online submissions for Find Minimum in Rotated Sorted Array.
*/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int min = -1;
        int left = nums[0];
        int right = nums[nums.size()-1];
        int midIndex = nums.size()/2;
        int mid = nums[midIndex];
        if (left < right && right >= mid) {
            return left;
        }
                
        int searchIndex = (mid >= left ? midIndex+1 : 0);
        min = mid;
        for (int i = searchIndex; i < nums.size(); i++) {
            if (nums[i] < min) {
                min = nums[i];
            }
        }
        
        return min;
    }
};
