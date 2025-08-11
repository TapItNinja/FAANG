class Solution {
public:
    string minWindow(string s, string t) {
        int r=0, l=0;
        int minlen=INT_MAX;
        int n=s.size(), m=t.size();
        unordered_map<char, int>mpp;
        int start=-1, count=0;
        for(int i=0; i<m; i++)mpp[t[i]]++;
        while(r<n){
            mpp[s[r]]--;
            if(mpp[s[r]]>=0){
                count++;
                // minlen=min((r-l+1), minlen);
            }
            while(count==m){
                if(r-l+1<minlen){
                    minlen=r-l+1;
                    start=l;
                }
                mpp[s[l]]++;
                if(mpp[s[l]]>0)count=count-1;
                l++;
            }
            r++;
        }
        return start==-1? "" : s.substr(start, minlen);
    }
};