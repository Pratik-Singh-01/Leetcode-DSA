class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans = 0;
        int min = prices[0];


        for(int i=0; i<n; i++) {
            if(prices[i] < min)
            {
                min = prices[i];
            }
            else
            {
                int current = prices[i];
                int profit = current - min;

                if(profit > ans)
                {
                    ans = profit;
                }
            }
        }
        return ans;
    }
};