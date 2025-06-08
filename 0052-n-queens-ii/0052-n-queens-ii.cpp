class Solution {
public:
    void solve(int col, int &count, vector<string>&board, vector<int>Row, vector<int>UpperD, vector<int>LowerD, int n){
        if(col==n){
            count++;
            return;
        }
        for(int row=0; row<n; row++){
            if(Row[row]==0 && UpperD[row+col]==0 && LowerD[n-1+col-row]==0){
                board[col][row]='Q';
                Row[row]=1;
                UpperD[row+col]=1;
                LowerD[n-1+col-row]=1;
                solve(col+1, count, board, Row, UpperD, LowerD, n);
                board[col][row]='.';
                Row[row]=0;
                UpperD[row+col]=0;
                LowerD[n-1+col-row]=0;
            }
        }
    }
    int totalNQueens(int n) {
        int count=0;
        vector<string>board(n);
        string s(n, '.');
        for(int i=0; i<n; i++){
            board[i]=s;
        }
        vector<int>Row(n, 0), UpperD(2*n-1, 0), LowerD(2*n-1, 0);
        solve(0, count, board, Row, UpperD, LowerD, n);
        return count;
    }
};