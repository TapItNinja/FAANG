class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const int MOD=1e9+7;
        int n=nums.size();
        long long ans=0;
        unordered_map<int, int>right;
        for(int i=2; i<n; i++){
            right[nums[i]]++;
        }
        unordered_map<int, int>left;
        left[nums[0]]++;
        for(int j=1; j<n-1; j++){
            int target=nums[j]*2;
            long long leftcount=left.count(target)?left[target]:0;
            long long rightcount=right.count(target)?right[target]:0;
            ans=(ans+leftcount*rightcount)%MOD;
            left[nums[j]]++;
            if(j+1<n){
                right[nums[j+1]]--;
                if(right[nums[j+1]]==0){
                    right.erase(nums[j+1]);
                }
            }
        }
        return ans;
    }
};