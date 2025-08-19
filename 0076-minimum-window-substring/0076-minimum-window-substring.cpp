class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int>mpp;
        for(int i=0; i<t.size(); i++){
            mpp[t[i]]++;
        }
        int minlen=INT_MAX;
        int r=0, l=0;
        int start=-1, count=0;
        int n=s.size(), m=t.size();
        while(r<n){
            mpp[s[r]]--;
            if(mpp[s[r]]>=0)count++;
            while(count==m){
                if(r-l+1<minlen){
                    minlen=r-l+1;
                    start=l;
                }
                mpp[s[l]]++;
                if(mpp[s[l]]>0)count-=1;
                l++;
            }
            r++;
        }
        return start==-1? "": s.substr(start, minlen);

    }
};