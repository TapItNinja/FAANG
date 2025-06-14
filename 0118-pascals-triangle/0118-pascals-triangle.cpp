class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        int num=numRows;
        for(int i=0; i<num; i++){
            vector<int>mid(i+1,1);
            for(int j=1; j<i; j++){
                mid[j]=ans[i-1][j-1]+ans[i-1][j];
            }
            ans.push_back(mid);
        }
        return ans;
    }
};