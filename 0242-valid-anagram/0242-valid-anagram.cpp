class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m)return false;
        unordered_map<char, int>mpp;
        for(int i=0; i<n; i++)mpp[s[i]]++;
        for(int i=0; i<m; i++){
            mpp[t[i]]--;
            if(mpp[t[i]]<0)return false;
        }
     return true;   
    }
};