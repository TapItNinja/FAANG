class Solution {
public:
    // int md = 1e9 + 7;
    // long long solve(vector<int>&freq,int rem,int i){
    //     if(i == freq.size())return 1;
    //     if(rem == 0)return 0;
    //     long long tot = 0;
    //     for(int take = 1 ; take <= min(freq[i],rem) ; take++){
    //         tot = (tot + solve(freq,rem-take,i+1))%md;
    //     }
    //     return tot;
    // }
    int possibleStringCount(string word, int k) {
        vector<int>grps;
        int n = word.size();
        long long tot = 1;
        int md = 1e9 + 7;
        for(int i = 0 ; i < n ; i++){
            char ch = word[i];
            int idx = i;
            while(idx < n && word[idx] == ch){
                idx++;
            }
            grps.push_back(idx - i);
            tot = (tot*(1ll*idx - i))%md;
            i = idx - 1;
        }
        int numgrps = grps.size(); 
        if(numgrps >= k)return tot;
        vector<long long>ans(k,0);
        ans[0] = 1;
        for(int x : grps){
            vector<long long>temp(k,0);
            for(int ln = 1 ; ln < k ; ln++){
                // 1,2,3...x
                // ans[ln - 1] + ans[ln - 2] + .... ans[ln - x]
                ans[ln] = (ans[ln] + ans[ln - 1])%md;
                temp[ln] = ans[ln - 1];
                if(ln - x - 1 >= 0){
                    temp[ln] = (temp[ln] - ans[ln - x - 1] + md)%md; 
                }
            }
            ans = temp;
        }
        long long more = 0;
        for(int i = 0;i < k ; i++){
            more = (more + ans[i])%md;
        }
        
        return (tot - more + md)%md;
    }
};