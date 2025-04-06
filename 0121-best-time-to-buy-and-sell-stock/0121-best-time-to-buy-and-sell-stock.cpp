class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxi=0;
        int minp=INT_MAX;
        for(int i=0; i<n; i++){
           minp=min(minp, prices[i]);
           maxi=max(maxi, prices[i]-minp); 

        }
        return maxi;
    }
};