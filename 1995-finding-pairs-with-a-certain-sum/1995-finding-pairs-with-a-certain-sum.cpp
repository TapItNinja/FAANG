class FindSumPairs {
public:
    vector<int>nums1, nums2;
    unordered_map<int, int>mpp;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        this->nums1=nums1;
        this->nums2=nums2;
        for(int num:nums2){
            mpp[num]++;
        }
    }
    
    void add(int index, int val) {
        mpp[nums2[index]]--;
        if(mpp[nums2[index]]==0)mpp.erase(nums2[index]);
        nums2[index]+=val;
        mpp[nums2[index]]++;
    }
    
    int count(int tot) {
        int res=0;
        for(int num:nums1){
            int complement=tot-num;
            if(mpp.find(complement)!=mpp.end()){
                res+=mpp[complement];
            }
        }
        return res;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */