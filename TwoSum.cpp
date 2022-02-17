/*
* Cade Weiskopf
* Runtime: 8 ms, faster than 96.09% of C++ online submissions for Two Sum.
* Memory Usage: 10.7 MB, less than 56.51% of C++ online submissions for Two Sum.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hashMap;
        std::unordered_map<int, int>::iterator hashMapIterator;
        vector<int> solution; 
        
        for(int i = 0; i < nums.size(); i++) {
            int difference = target - nums[i];
            hashMapIterator = hashMap.find(difference);
            if(hashMapIterator == hashMap.end()) {
                hashMap[nums[i]] = i;
                std::cout << "addHashMap " << nums[i] << " -> " << hashMap[nums[i]] << std::endl;
            } else {
                solution.push_back(hashMap[difference]);
                solution.push_back(i);
                break;
            }
        }
        
        return solution;
    }
};
