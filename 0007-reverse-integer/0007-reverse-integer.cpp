class Solution {
public:
    int reverse(int x) {
        int n=x;
        int num=0;
        while(n!=0){
            int rem=n%10;
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && rem > 7)) return 0;
            if (num < INT_MIN / 10 || (num == INT_MIN / 10 && rem < -8)) return 0;
            num=num*10+rem;
            n/=10;
        }
        // if(num < INT_MIN || num > INT_MAX) return 0;
        return num;
    }
};