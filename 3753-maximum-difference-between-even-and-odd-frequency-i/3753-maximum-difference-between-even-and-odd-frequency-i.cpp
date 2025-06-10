class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int>mpp;
        int n=s.size();
        for(int i=0; i<n; i++){
            mpp[s[i]]++;
        }
        int maxi=0, mini=INT_MAX;
        for(auto& [i, j]: mpp){
            if(j%2!=0){maxi=max(maxi, j);}
            else mini=min(mini, j);
        }
        return maxi-mini;
        
    }
};