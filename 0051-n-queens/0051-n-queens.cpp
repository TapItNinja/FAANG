class Solution {
public:
    void solve(int col, vector<vector<string>>&ans, vector<string>&board, vector<int>&Row, vector<int>&UpperD, vector<int>&LowerD, int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0; row<n; row++){
            if(Row[row]==0 && UpperD[row+col]==0 && LowerD[n-1+col-row]==0){
                board[row][col]='Q';
                Row[row]=1;
                UpperD[row+col]=1;
                LowerD[n-1+col-row]=1;
                solve(col+1, ans, board, Row, UpperD, LowerD, n);
                board[row][col]='.';
                Row[row]=0;
                UpperD[row+col]=0;
                LowerD[n-1+col-row]=0;
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
        vector<int>Row(n, 0), UpperD(2*n-1, 0), LowerD(2*n-1, 0);
        solve(0, ans, board, Row, UpperD, LowerD, n);
        return ans;
    }
};