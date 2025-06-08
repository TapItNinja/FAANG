class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        long long int n=x;
        long long int rev=0;
        while(n>0){
            long long int temp=n%10;
            n=n/10;
            rev=(rev*10)+temp;
        }
        if(rev==x)return true;
        return false;
    }
};