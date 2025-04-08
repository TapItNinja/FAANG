class Solution {
public:
    bool isPalindrome(int x) {
        long long int a=x;
        long long int rev=0;
        if(x<0)return false;
        while(a>0){
            int rem;
            rem=a%10;
            a=a/10;
            rev=(rev*10)+rem;
        }
        if(x==rev)return true;
        return false;
    }
};