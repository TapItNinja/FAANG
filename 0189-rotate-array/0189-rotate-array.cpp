class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int>ans(n, -1);
        for(int i=0; i<n; i++){
            ans[(i+k)%n]=nums[i];
        }
        nums=ans;
    }
};