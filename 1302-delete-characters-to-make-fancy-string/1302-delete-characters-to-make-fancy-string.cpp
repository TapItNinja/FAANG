class Solution {
public:
    string makeFancyString(string s) {
        string ans;
        int n=s.size();
        if(n<=1)return s;
        int count=1;
        ans+=s[0];
        for(int i=1; i<n; i++){
            char temp=s[i-1];
            if(temp==s[i]){
                count++;
                if(count<=2)ans+=s[i];
                else continue;
            }else{
                count=1;
                ans+=s[i];
            }
        }
        return ans;
    }
};