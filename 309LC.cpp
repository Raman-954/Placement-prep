class Solution {
public:
const static int INF=(int)1e9;
vector<vector<int>> dp;
int rec(int i,int buy,vector<int>& prices){
    if(i>=prices.size()){
        return 0;
    }
     if (dp[i][buy] != -INF)
            return dp[i][buy];
    // buy
    int max_profit=-INF;
    // if buy==0 that means not any stock right now
    if(buy==0){
        int op1=rec(i+1,0,prices);
        int op2=-prices[i]+rec(i+1,1,prices);
        max_profit=max(op1,op2);
    }
    // if buy==1 that means you are currently holding some stock
    else if(buy==1){
        int op1=rec(i+1,1,prices);
        int op2=prices[i]+rec(i+2,0,prices);
        max_profit=max(op1,op2);
    }
   return dp[i][buy] = max_profit;
}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
     dp.assign(n, vector<int>(2, -INF));
        return rec(0,0,prices);
    }
};
