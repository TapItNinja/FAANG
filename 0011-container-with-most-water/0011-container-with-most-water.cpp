class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int r=n-1, l=0;
        int maxi=0;
        while(l<r){
            int width=r-l;
            int height1=min(height[r], height[l]);
            maxi=max(maxi, width*height1);
            if(height[r]<height[l])r--;
            else l++;
        }
        return maxi;
    }
};