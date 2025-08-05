class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int>mpp={
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int sum=0;
        int n=s.size();
        for(int i=0; i<n; i++){
            if(i+1<n && mpp[s[i+1]]>mpp[s[i]] ){
                sum+=mpp[s[i+1]]-mpp[s[i]];
                i++;
            }
            else{
                sum+=mpp[s[i]];
            }
        }
        return sum;
    }
};