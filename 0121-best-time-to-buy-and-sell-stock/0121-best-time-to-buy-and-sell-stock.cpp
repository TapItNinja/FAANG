class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int n=prices.size();
        int maxp=INT_MIN;
        for(int i=0; i<n; i++){
            if(mini>prices[i]){
                mini=prices[i];
                continue;
            }
            else{
                maxp=max(maxp, prices[i]-mini);
            }
        }
        return maxp==INT_MIN ? 0 : maxp;
    }
};