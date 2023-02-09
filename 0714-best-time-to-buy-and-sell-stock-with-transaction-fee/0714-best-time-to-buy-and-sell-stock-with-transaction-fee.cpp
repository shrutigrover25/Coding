class Solution {
public:
    
int solveMem(vector<int> &prices, int fee, int index, bool buy, vector<vector<int>> &dp){
        if(index == prices.size()) return 0;

        if(dp[index][buy] != -1){
            return dp[index][buy];
        }

        int profit = 0;
        if(buy){
            int choose = -prices[index] + solveMem(prices, fee, index+1, 0, dp);
            int skip = 0 + solveMem(prices, fee, index+1, 1, dp);

            profit = max(choose, skip);
        }
        else{
            int choose = (prices[index] - fee) + solveMem(prices, fee, index+1, 1, dp);
            int skip = 0 + solveMem(prices, fee, index+1, 0, dp);

            profit = max(choose, skip);
        }

        return dp[index][buy] = profit;
    }

    int maxProfit(vector<int>& prices, int fee) {
     
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(2, -1));

        return solveMem(prices, fee, 0, 1, dp);
    }
};