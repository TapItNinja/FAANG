class Solution {
public:
    int solve(char a, char b, string s, int k){
        int dist=0, maxi=0;
        for(int i=0; i<s.size(); i++){
            if(a==s[i] or b==s[i])dist++;
            else{
                if(k>0){
                    k--;
                    dist++;
                }else{
                    maxi=max(maxi, dist);
                    dist--;
                }
            }
        }
        maxi=max(maxi, dist);
        return maxi;
    }
    int maxDistance(string s, int k) {
        if(s.size()==k)return k;
        int nw=solve('N', 'W', s, k);
        int ne=solve('N', 'E', s, k);
        int sw=solve('S', 'W', s, k);
        int se=solve('S', 'E', s, k);

        return max({nw, ne, sw, se});

    }
};