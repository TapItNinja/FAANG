class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int r=n-1;
        int l=0;
        int maxi=0;
        while(l<r){
            int w=r-l;
            int h=min(height[r], height[l]);
            maxi=max(maxi, w*h);
            if(height[r]<height[l])r--;
            else l++;
        }
        return maxi;
    }
};