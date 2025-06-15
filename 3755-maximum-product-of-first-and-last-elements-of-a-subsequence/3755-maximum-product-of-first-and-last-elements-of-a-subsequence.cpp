class Solution {
public:
    long long max1(long long a, long long b){
        if(a<b)
            return b;
        return a;
    }
    long long maximumProduct(vector<int>& nums, int m) {
        int n = nums.size();
        long long res=LLONG_MIN;
        if(n==1)
            return (long long)nums[0]*nums[0];
        if(m==1){
            for(auto x:nums){
                res=max1(res,(long long)x*x);
            }
            return res;
        }
        vector<int> neg(n,0);
        vector<int> pos(n,0);
        pos[n-1]=nums[n-1];
        neg[n-1]=nums[n-1];
        for(int i=n-1;i>0;i--)
            pos[i-1]=max(nums[i-1],pos[i]);
        for(int i=n-1;i>0;i--)
            neg[i-1]=min(neg[i],nums[i-1]);

        for(int i=0;i<=n-m;i++){
            if(nums[i]>0)
                res=max1(res,(long long)pos[i+m-1]*nums[i]);
            else
                res=max1(res,(long long)neg[i+m-1]*nums[i]);
        }
        return res;
    }
};