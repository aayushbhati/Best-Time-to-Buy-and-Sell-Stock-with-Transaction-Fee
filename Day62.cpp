class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int ans1=INT_MIN;
        int ans2=0;
        for (int i = 0;i < prices.size();i++) {
            ans1 = max(ans1, ans2 - prices[i]);
            ans2 = max(ans2, ans1 + prices[i] - fee);
        }
        return ans2;
    }
};
