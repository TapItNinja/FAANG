class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r=0, l=0;
        int n=s.size();
        unordered_map<char, int>mpp;
        int maxcount=0;
        int count=0;
        while(r<n){
            mpp[s[r]]++;
            while(mpp[s[r]]>1){
                mpp[s[l]]--;
                l++;
                count--;
            }
            count++;
            maxcount=max(maxcount, count);
            r++;
        }
        return maxcount;
    }
};