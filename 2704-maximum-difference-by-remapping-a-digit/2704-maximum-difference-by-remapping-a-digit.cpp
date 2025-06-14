class Solution {
    int solveMaxi(int num){
        string s = to_string(num);
        int maxi = 0;
        int i = 0, n = s.size();
        while(i < n){
            if(s[i] == '9')
               i++;
            else{
               char ch = s[i];
               replace(s.begin(), s.end(), ch, '9');
               break;
            }
        }
       maxi = stoi(s);
       return maxi;
    }

    int solveMini(int num){
        string s = to_string(num);
        int mini = 0;
        int i = 0, n = s.size();
        while(i < n){
            if(s[i] == '0')
               i++;
            else{
               char ch = s[i];
               replace(s.begin(), s.end(), ch, '0');
               break;
            }
        }
       mini = stoi(s);
       return mini;
    }
public:
    int minMaxDifference(int num) {
        return solveMaxi(num) - solveMini(num);
    }
};