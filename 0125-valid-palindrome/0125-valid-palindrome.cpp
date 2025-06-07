class Solution {
public:
    bool isPalindrome(string &s, int low, int high){
        if(low>=high)return true;
        if(!isalnum(s[low]))return isPalindrome(s, low+1, high);
        if(!isalnum(s[high]))return isPalindrome(s, low, high-1);
        if(tolower(s[low])!=tolower(s[high])) return false;
        return isPalindrome(s, low+1, high-1);
    }
    bool isPalindrome(string s) {
        return isPalindrome(s, 0, s.size()-1);
    }
};