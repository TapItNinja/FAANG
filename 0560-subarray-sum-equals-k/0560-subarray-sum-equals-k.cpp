class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        int sum=0;
        map<int, int>mpp;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            if(sum==k)count++;
            int rem=sum-k;
            if(mpp.find(rem)!=mpp.end()){
                count+=mpp[rem];
            }
                mpp[sum]++;
        }
        return count;
    }
};