class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int n=nums.size();
        if(n==0){return 0;}
        int longest=0;
        for(int i=0 ; i<n; i++){
            st.insert(nums[i]);
        }
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int count=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                    count++;
                    x+=1;
                }
                longest=max(longest, count);
            }
        }
        return longest;
    }
};