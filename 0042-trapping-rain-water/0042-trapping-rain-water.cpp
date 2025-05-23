class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>prefix(n, 0);
        prefix[0]=height[0];
        vector<int>suffix(n, 0);
        suffix[n-1]=height[n-1];
        for(int i=1; i<n; i++){
            prefix[i]=max(height[i], prefix[i-1]);
            suffix[n-i-1]=max(height[n-i-1], suffix[n-i]);
        }
        int total=0;
        for(int i=0; i<n; i++){
            int rmax=suffix[i];
            int lmax=prefix[i];
            if(rmax>height[i] && lmax>height[i]){
                total+=min(rmax, lmax)-height[i];
            }
        }
        return total;
    }
};