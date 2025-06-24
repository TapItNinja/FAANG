class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool>v(nums.size(),false);
        vector<int>v1;
        for(int i=0;i<nums.size();i++)
        {
            v[nums[i]-1]=true;
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==false)
            v1.push_back(i+1);
        }
        return v1;
        
    }
};