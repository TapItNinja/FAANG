class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        set <int> ans;
        int i = 0;
        int j = 0;
        while(i < a.size() && j < b.size()){
            if (a[i] < b[j]){
                i++;
            }
            else if (b[j] < a[i]){
                j++;
            }
            else{
                if (a[i] == b[j]){
                    ans.insert(a[i]);
                    i++;
                    j++;
                }
            }
        }
    return vector<int>(ans.begin(), ans.end());
    }
};