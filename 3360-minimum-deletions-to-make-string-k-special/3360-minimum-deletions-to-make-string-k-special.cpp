class Solution {
public:
    int minimumDeletions(string word, int k) {
        unordered_map<int, int>mpp;
        for(int i=0; i<word.size(); i++){
            mpp[word[i]]++;
        }
        vector<int>diff;
        for(auto& j:mpp){
            diff.push_back(j.second);
        }
        sort(diff.begin(), diff.end());
        int n=diff.size();
        int mindel=INT_MAX;
        for(int i=0; i<n; i++){
            int target=diff[i];
            int del=0;
            for(int j=0; j<i; j++){
                del+=diff[j];
            }
            for(int j=i+1; j<n; j++){
                if(diff[j]>target+k){
                    del+=diff[j]-(target+k);
                }
            }
            mindel=min(mindel, del);
        }
        return mindel;
    }
};