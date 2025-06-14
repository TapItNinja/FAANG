class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)return n;
        int prev=1;
        int curr=1;
        int future;
        for(int i=2; i<=n; i++){
            future=curr+prev;
            prev=curr;
            curr=future;
        }
        return future;
    }
};