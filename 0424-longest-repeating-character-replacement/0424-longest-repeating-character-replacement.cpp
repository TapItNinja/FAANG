class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int change=0;
        int maxfreq=INT_MIN;
        int r=0, l=0;
        int length=0;
        int maxlen=0;
        unordered_map<char, int>mpp;
        while(r<n){
            mpp[s[r]]++;
            if(maxfreq<mpp[s[r]]){
                maxfreq=mpp[s[r]];
            }
            change=(r-l+1)-maxfreq;
            while((r-l+1)-maxfreq >k){
                mpp[s[l]]--;
                l++;
            }
            maxlen=max(maxlen, r-l+1);
            r++;
        }
        return maxlen;

    }
};