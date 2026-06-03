class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp = 0;
        int minB = prices[0];

        for (int& sell: prices) {
            mp = max(mp, sell - minB);
            minB = min(minB, sell);
        }

        return mp;
    }
};