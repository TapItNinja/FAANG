class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>mpp;
        for(int num:nums){
            mpp.insert(num);
        }
        int k=mpp.size();
        int j=0;
        for(int x:mpp){
            nums[j++]=x;
        }
        return k;
    }
};