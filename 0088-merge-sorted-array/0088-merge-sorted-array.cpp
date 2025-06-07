class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0; int j=0;
        vector<int>ans;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        if(i!=m){
            for(int ans1=i; ans1<m; ans1++){
                ans.push_back(nums1[ans1]);
            }}
        if(j!=n){
            for(int ans1=j; ans1<n; ans1++){
                ans.push_back(nums2[ans1]);
            }
        }
        nums1=ans;
    }
};