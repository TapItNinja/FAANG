class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mpp;
        vector<int>ans;
        int n=nums.size();
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        vector<vector<int>>freq(n+1);
        for(auto& [c, k]: mpp){
            freq[k].push_back(c);
        }
        int i=n;
        while(i>=0 && ans.size()<k){
            for(int num:freq[i]){
                ans.push_back(num);
            }
            i--;
        }
        return ans;
    }
};