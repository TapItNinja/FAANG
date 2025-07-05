class Solution {
public:
    int findLucky(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int, int>mpp;
        for(int num: nums){
            mpp[num]++;
        }
        int maxi=-1;
        for(auto& pair: mpp){
            if(pair.first==pair.second){
                maxi=max(maxi, pair.first);
            }
        }
        return maxi;
    }
};