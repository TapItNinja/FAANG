class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<int, vector<int>, greater<int>>minheap;
        for(int n:nums){
            minheap.push(n);
            if(minheap.size()>k){
                minheap.pop();
            }
        }
        return minheap.top();
    }
};