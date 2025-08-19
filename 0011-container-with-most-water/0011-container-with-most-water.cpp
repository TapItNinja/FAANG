class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int r=n-1, l=0;
        int maxarea=INT_MIN;
        while(l<r){
            int h=min(height[l], height[r]);
            int len=r-l;
            maxarea=max(maxarea, h*len);
            if(height[l]<height[r])l++;
            else r--;
        }
        return maxarea;
    }
};