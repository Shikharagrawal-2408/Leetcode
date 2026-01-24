class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mina=prices[0];
        int profit=0;

        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<mina)
            mina=prices[i];

            profit=max(profit,prices[i]-mina);
        }
        return profit;
    }
};