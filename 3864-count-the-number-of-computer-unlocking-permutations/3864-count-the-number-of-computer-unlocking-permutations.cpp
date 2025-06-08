class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        int n = complexity.size();
        int bossTask = complexity[0]; // you, the boss
        for (int i = 1; i < n; i++) {
            if (complexity[i] <= bossTask) 
                return 0; // someone dares to have an easier task? Nope!
        }
        int ans = 1;
        for (int i = 2; i < n; i++) {
            ans = 1LL * ans * i % 1000000007; // modular factorial power \U0001f4aa
        }
        return ans;
    }
};
