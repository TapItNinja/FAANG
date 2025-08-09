class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int r=0, l=0;
        int maxf=0;
        unordered_map<char, int>mpp;
        while(r<n){
            mpp[s[r]]++;
            // int count=0;
            while(mpp[s[r]]>1){
                mpp[s[l]]--;
                l++;
                // count--;
                if(mpp[s[r]]<=1)break;
            }
            // count++;
            maxf=max(maxf, r-l+1);
            r++;
        }
        return maxf;
    }
};