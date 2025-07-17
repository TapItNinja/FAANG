class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int, int>mp;
        for(int num :nums){
            mp[num]++;
        }
        vector<int>res;
        // int index=0;
        for(int i=0; i<=2; i++){
            while(mp[i]-->0){
                res.push_back(i);
            }
        }
        nums=res;
        // return res;
        
    }
};