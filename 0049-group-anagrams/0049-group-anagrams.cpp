class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string, vector<string>>ans;
        for(int i=0; i<n; i++){
            string str=strs[i];
            sort(str.begin(), str.end());
            ans[str].push_back(strs[i]);
        }
        vector<vector<string>>ans1;
        for(auto &[k,p]: ans){
            ans1.push_back(p);
        }
        return ans1;
    }
};