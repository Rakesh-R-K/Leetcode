class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0, n = prices.size(), mini = INT_MAX;
        for(int i = 0 ; i < n ; i++){
            if(mini > prices[i]){
                mini = prices[i];
            }
            int profit = prices[i] - mini;
            if(profit > res){
                res = profit;
            }
        }
        return res;
    }
};