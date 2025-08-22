class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char , int>mpp;
        int r=0, l=0;
        int n=s.size();
        int count=0;
        int maxcount=0;
        while(r<n){
            mpp[s[r]]++;
            while(mpp[s[r]]>1){
                mpp[s[l]]--;
                l++;
                count--;
            }
            count++;
            maxcount=max(count, maxcount);
            r++;
        }
        return maxcount;
    }

};