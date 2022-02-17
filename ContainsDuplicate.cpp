/*
* Cade Weiskopf
* Runtime: 98 ms, faster than 71.46% of C++ online submissions for Contains Duplicate.
* Memory Usage: 51.2 MB, less than 66.21% of C++ online submissions for Contains Duplicate.
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> hashSet;
        std::unordered_set<int>::iterator hashSetIterator;
        
        for(int i : nums) {
            hashSetIterator = hashSet.find(i);
            if(hashSetIterator != hashSet.end()) {
                return true;
            } else {
                hashSet.insert(i);
            }
        }
        
        return false;
    }
};
