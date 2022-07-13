class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit=0;
        int minel=prices[0];
        
        for(int i=1;i<prices.size();i++)
        {
            int cost=prices[i]-minel;
            profit=max(profit,cost);
            minel=min(minel,prices[i]);
        }
        
        return profit;
        
    }
};