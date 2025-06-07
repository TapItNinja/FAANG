class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>maxpre(n);
        maxpre[0]=height[0];
        for(int i=1; i<n; i++){
            maxpre[i]=max(maxpre[i-1], height[i]);
        }
        vector<int>maxsuf(n);
        maxsuf[n-1]=height[n-1];
        for(int i=n-2; i>=0; i--){
            maxsuf[i]=max(maxsuf[i+1], height[i]);
        }
        int water=0;
        for(int i=0; i<n; i++){
            water+=min(maxpre[i], maxsuf[i])-height[i];
        }
        return water;

    }
};