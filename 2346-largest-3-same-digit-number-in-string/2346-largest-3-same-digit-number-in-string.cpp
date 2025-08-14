class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
        int n=num.size();
        int r=0, l=0;
        int count=0;
        while(r<n){
            if(r-l+1<3){
                r++;
                continue;
            }
            if(num[l]==num[l+1] && num[l+1]==num[l+2]){
                string window=num.substr(l, 3);
                ans=max(ans, window);
            }
            l++;
            r++;
        }
        return ans;
    }
};