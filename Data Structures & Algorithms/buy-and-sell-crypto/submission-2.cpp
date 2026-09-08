class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int maxprofit = 0;

        while(right < prices.size()) {

            if(prices[left] > prices[right]) {
                left = right;
            }
            else {
                maxprofit = max(maxprofit,
                                prices[right] - prices[left]);
            }

            right++;
        }

        return maxprofit;
    }
};