class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> v;
        while(s.length() % k != 0){
            s+=fill;
        }
        for(int i = 0 ; i < s.length() ;i+=k){
            v.push_back(s.substr(i,k));
        }
        return v;
    }
};