class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j=0;
        int count=0;
        string ans="";
        while(i<word1.size() && j<word2.size()){
            if(count%2==0){
                ans+=word1[i];
                i++;
                count++;
            }else{
                ans+=word2[j];
                j++;
                count++;
            }
        }
        while(i<word1.size()){ans+=word1[i++];}
        while(j<word2.size()){ans+=word2[j++];}
        return ans;
    }
};