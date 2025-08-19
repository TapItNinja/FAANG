class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size();
        int m=p.size();
        if(n<m)return {};
        vector<int>res;
        vector<int>countp(26, 0), counts(26, 0);
        for(auto& c: p)countp[c-'a']++;
        for(int i=0; i<n; i++){
            counts[s[i]-'a']++;
            if(i>=m){
                counts[s[i-m]-'a']--;
            }
            if(countp==counts){
                res.push_back(i-m+1);
            }
        }
        return res;
    }
};