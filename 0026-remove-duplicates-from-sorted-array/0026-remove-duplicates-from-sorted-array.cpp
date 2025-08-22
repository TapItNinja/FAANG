class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>res;
        for(int num: nums){
            res.insert(num);
        }
        int n=res.size();
        int j=0;
        for(int i: res){
            nums[j]=i;
            j++;
        }
        return n;
    }
};