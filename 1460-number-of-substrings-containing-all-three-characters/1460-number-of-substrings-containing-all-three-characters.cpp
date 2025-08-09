class Solution {
public:
    int solve(string &s, int k){
        int r=0, l=0, count=0, maxsub=0;
        vector<int>arr(3, 0);
        int distinct=0;
        while(r<s.size()){
            if(arr[s[r]-'a']==0){
                distinct++;   
            }
            arr[s[r]-'a']++;
            while(distinct>k){
                arr[s[l]-'a']--;
                if(arr[s[l]-'a']==0){
                    distinct--;
                }
                l++;
            }
            maxsub+=(r-l+1);
            r++;
        }
       return maxsub; }
        
    int numberOfSubstrings(string s) {
        return solve(s, 3)-solve(s, 2);
    }
};