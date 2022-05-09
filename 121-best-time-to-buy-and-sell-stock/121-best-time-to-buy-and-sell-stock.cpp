class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxii=0;
        int minii=INT_MAX;
        
        for(int i=0;i<prices.size();i++)
        {
            
            minii=min(prices[i],minii);
            maxii=max(maxii,prices[i]-minii);
        }
        
        return maxii;
        
    }
};