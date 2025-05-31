class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> sym = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
};
    int result=0;
    int n=s.size();
    for(int i=0; i<n; i++){
        if(sym[s[i]]<sym[s[i+1]] && i<n-1){
            result-=sym[s[i]];
        }else{
            result+=sym[s[i]];
        }
    }
    return result;
    }
};