class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pref=1;
        int n=nums.size();
        vector<int>ans(n,1);
        for(int i=0; i<n; i++){
            ans[i]*=pref;
            pref*=nums[i];
        }
        int suf=1;
        for(int i=n-1; i>=0; i--){
            ans[i]*=suf;
            suf*=nums[i];
        }
        return ans;
    }
};