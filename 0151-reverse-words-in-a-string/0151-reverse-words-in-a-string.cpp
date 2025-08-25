class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        stack<string>st;
        string ans="";
        int i=0;
        string temp="";
        while(i<n){
            while(i<n && s[i]!=' '){
                temp+=s[i];
                i++;
            }
            if (!temp.empty()) {
                st.push(temp);
                temp = "";         
            }
            // st.push(temp);
            while(i<n && s[i]==' ')i++;
        }
       while(!st.empty()){
            ans+=st.top();
            st.pop();
            if(st.empty())break;
            ans+=' ';
        }
        return ans;
    }
};