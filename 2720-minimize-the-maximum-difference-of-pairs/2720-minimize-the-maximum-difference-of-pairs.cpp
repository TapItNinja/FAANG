class Solution {
public:
    int canformpairs(int d,vector<int>& nums,int p){
        int cnt=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]<=d){
                cnt++;
                i++;
                if(cnt>=p) 
                    return 1;
            }
        }
        return 0;
    }
    int minimizeMax(vector<int>& nums, int p) {
        if (p == 0) return 0;
        sort(nums.begin(),nums.end());
        int res=0;
        int l=0;
        int h=nums[nums.size()-1]-nums[0];
        while(l<=h){
            int mid=(l+(h-l)/2);
            int x=canformpairs(mid,nums,p);
            if(x==1){
                res=mid;
                h=mid-1;
            }
            else l=mid+1;
        }
        return res;
    }
};