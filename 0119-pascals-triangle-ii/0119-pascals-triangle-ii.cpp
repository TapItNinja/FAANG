class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>ans;
        int n=rowIndex;
        for(int i=0; i<=n; i++){
            vector<int>mid(i+1, 1);
            for(int j=1; j<i; j++){
                mid[j]=ans[i-1][j-1]+ans[i-1][j];
            }
            ans.push_back(mid);
        }
        return ans[rowIndex];
    }
};