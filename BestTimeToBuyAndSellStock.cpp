/*
* Cade Weiskopf
* Runtime: 104 ms, faster than 97.21% of C++ online submissions for Best Time to Buy and Sell Stock.
* Memory Usage: 93.2 MB, less than 99.45% of C++ online submissions for Best Time to Buy and Sell Stock.
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int max = 0;
        
        for(int i = 0, j = 1; j < prices.size(); j++) {
            if(prices[i] < prices[j]) {
                profit = prices[j] - prices[i];
                if(profit > max) {
                    max = profit;
                }
            } else {
                i = j;
            }
        }
        
        return max;
    }
};
