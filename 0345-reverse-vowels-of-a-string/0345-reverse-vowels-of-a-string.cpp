class Solution {
public:
    string reverseVowels(string s) {
        int n=s.size();
        int right=n-1;
        int left=0;
        unordered_set<char>mpp={'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
        while(left<right){
            if(mpp.count(s[left])==1 && mpp.count(s[right])==1){
                swap(s[left], s[right]);
                right--;
                left++;
                }
            else if (mpp.count(s[left])!=1)left++;
            else right--;
        }
        return s;
    }
};