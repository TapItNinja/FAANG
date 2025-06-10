class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int i=n-1;
        int count=0;
        while(i>=0){
            if(s[i]!=' ')break;
            i--;
        }
        // i=n-1;
        while(i>=0){
            if(s[i]==' ')break;
            count++;
            i--;
        }
        return count;
    }
};