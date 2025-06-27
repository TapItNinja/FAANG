class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)return false;
        int a=pow(3, 19);
        return a%n==0;
    }
};