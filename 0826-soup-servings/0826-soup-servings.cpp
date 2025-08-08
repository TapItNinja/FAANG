class Solution {
public:
    double solve(int A, int B, vector<vector<double>> &temp){
        if(A<=0 && B<=0)return 0.5;
        if(B<=0)return 0;
        if(A<=0)return 1;
        if(temp[A][B]!=-1.0)return temp[A][B];
        return temp[A][B]=0.25*(solve(A-100, B, temp)+solve(A-75, B-25, temp)+solve(A-50, B-50, temp)+solve(A-25, B-75, temp));
    }
    double soupServings(int n) {
        if(n>5000)return 1;
        int soup_A=n, soup_B=n;
        vector<vector<double>>temp(n+1, vector<double>(n+1, -1.0));
        return solve(n, n, temp);
    }
};