class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int output = 0; 
        int startIndex = 0;
        for (int i = 0; i < prices.size()-1; i++) {
            if (prices[i] > prices[i+1]) {
                output += prices[i] - prices[startIndex];
                startIndex = i+1;
            }
            else if (i == prices.size()-2) {
                output += prices[i+1] - prices[startIndex];
            }
        }
        return output;
    }
};