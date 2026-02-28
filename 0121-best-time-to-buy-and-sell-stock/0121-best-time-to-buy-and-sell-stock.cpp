class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxprofit=0;
        int mini=prices[0];
        for(int i=1; i<n; i++){
            if(mini>prices[i]){
                mini=prices[i];
            }else{
                maxprofit=max(maxprofit, prices[i]-mini);
            }
        }
        return maxprofit;
    }
};