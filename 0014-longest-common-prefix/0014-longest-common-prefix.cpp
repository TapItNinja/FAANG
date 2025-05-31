class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(), strs.end());
        int n=strs.size();
        int m=strs[0].size();
        if(n==0)return "";
        if(n==1)return strs[0];
        for(int i=0; i<m; i++){
            if(strs[0][i]==strs[n-1][i]){
                ans+=strs[0][i];
            }else break;
        }
        return ans;
    }
};