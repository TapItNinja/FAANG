class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n=nums.size();
        // abs(i-j)<=k
        // nums[j]=key
        vector<int>idx;
        for(int i=0; i<n; i++){
            if(nums[i]==key){
                idx.push_back(i);
            }
        }
        vector<int>res;
        for(int i=0; i<n; i++){
            for(int j:idx){
                if(abs(i-j)<=k){
                    res.push_back(i);
                    break;
                }
            }
        }
        return res;
        

    }
};