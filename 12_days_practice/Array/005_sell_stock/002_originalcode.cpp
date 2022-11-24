

int maximumProfit(vector<int> & prices){
    int maxProfit = 0;
    int n = prices.size();
    for(int i=0;i<n;i++){
        int buy = prices[i],currMaxProfit = 0;
        for(int j=i+1;j<n;j++){
            currMaxProfit = max(currMaxprofit,(prices[j]-buy));
        }
    }
    maxProfit = max(maxProfit,currMaxProfit);
    return maxProfit;
}