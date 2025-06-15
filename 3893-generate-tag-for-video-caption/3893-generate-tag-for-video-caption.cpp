class Solution {
public:
    string generateTag(string caption) {
        string ans="#";
        string word;
        bool first=true;
        for(int i=0; i<=caption.size(); i++){
            if(i<caption.size() && caption[i]!=' '){
                if(isalpha(caption[i]))word+=caption[i];
            }else if(!word.empty()){
                for(char &c:word) c=tolower(c);
                if(!first)word[0]=toupper(word[0]);
                ans+=word;
                word.clear();
                first=false;
                if(ans.size()>=100)break;
            }
        }
        return ans.substr(0,100);
    }
};