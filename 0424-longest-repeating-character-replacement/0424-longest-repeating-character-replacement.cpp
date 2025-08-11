class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int r=0, l=0;
        int changes=0;
        unordered_map<char, int>mpp;
        int maxfreq=0;
        int maxlen=INT_MIN;
        while(r<n){
            mpp[s[r]]++;
            maxfreq=max(maxfreq, mpp[s[r]]);
            changes=(r-l+1)-maxfreq;
            while((r-l+1)-maxfreq>k){
                mpp[s[l]]--;
                l++;
            }
            maxlen = max(maxlen, r - l + 1);
            r++;
        }
        return maxlen;
    }
};