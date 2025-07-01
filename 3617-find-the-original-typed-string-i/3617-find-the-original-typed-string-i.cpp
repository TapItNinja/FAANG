class Solution {
public:
    int possibleStringCount(string nums) {
        int n=nums.size();
        int ans=1;
        
        for(int i=0; i<n;){
            int j=i;
            while(j<n && nums[i]==nums[j]){
                j++;
            }
            int group_len=j-i;
            if(group_len>1){
                ans+=(group_len-1);
            }
            i=j;
        }
        return ans;
    }
};