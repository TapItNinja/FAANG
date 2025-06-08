class Solution {
public:
    void solve(int col, vector<vector<string>>&ans, vector<string>&board, vector<int>&Row, vector<int>&upperd, vector<int>&lowerd, int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0; row<n; row++){
            if(Row[row]==0 && upperd[row+col]==0 && lowerd[n-1+col-row]==0){
                board[col][row]='Q';
                Row[row]=1;
                upperd[row+col]=1;
                lowerd[n-1+col-row]=1;
                solve(col+1, ans, board, Row, upperd, lowerd, n);
                board[col][row]='.';
                Row[row]=0;
                upperd[row+col]=0;
                lowerd[n-1+col-row]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0; i<n; i++){
            board[i]=s;
        }
        vector<int>ROW(n,0), UPPERD(2*n-1, 0), LOWERD(2*n-1, 0);
        solve(0, ans, board, ROW, UPPERD, LOWERD, n);
        return ans;
    }
};