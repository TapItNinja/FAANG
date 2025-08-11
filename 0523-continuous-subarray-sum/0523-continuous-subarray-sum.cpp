class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        int len=0;
        map<int, int>mpp;
        mpp[0]=-1; // to check the length of the subarray to be initialised as 1 is counting number of occurance in the map.
        for(int i=0; i<n; i++){
            sum+=nums[i];
            if(sum%k==0){
                if(i-mpp[0]>1)return true;
            }
            int rem=sum%k;
            if(mpp.find(rem)!=mpp.end()){
                if(i-mpp[rem]>1)return true;
            }else mpp[sum%k]=i; //store only the first occurance.
        }
        return false;
    }
};