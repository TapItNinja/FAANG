class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n=nums.size();
        vector<pair<int, int>>mpp;
        for(int i=0; i<n; i++)mpp.push_back({nums[i], i});
        sort(mpp.begin(), mpp.end(), [](auto& a, auto& b){
            return a.first>b.first;
        });
        vector<pair<int, int>>selected(mpp.begin(), mpp.begin()+k);
        sort(selected.begin(), selected.end(), [](auto& a, auto&b){
            return a.second<b.second;
        });
        vector<int>ans;
        for(auto& num: selected){
            ans.push_back(num.first);
        }
        return ans;

    }
};