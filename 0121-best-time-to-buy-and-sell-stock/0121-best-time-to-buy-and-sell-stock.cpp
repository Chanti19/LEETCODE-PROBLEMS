class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n =prices.size();
        int profit = 0;
        int minprice =prices[0];
        for(int i=1;i<n;i++){
            if(minprice>prices[i]){
                minprice=prices[i];
            }
            profit= max(profit,prices[i]-minprice);
        }
        return profit;
    }
};