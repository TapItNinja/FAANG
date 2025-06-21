class Solution {
public:
    int getcost(vector<int>&pos, int start){
        int cost=0;
        for(int i=0; i<pos.size(); i++){
            cost+=abs(pos[i]-(start+2*i));
        }
        return cost;
    }
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<int>oddpos, evenpos;
        for(int i=0; i<n; i++){
            if(nums[i]%2==0)evenpos.push_back(i);
            else oddpos.push_back(i);
        }
        int odd=oddpos.size();
        int even=evenpos.size();
        if(abs(odd-even)>1)return -1;
        if(odd==even)return min(getcost(oddpos, 0), getcost(evenpos, 0));
        else if(odd>even)return getcost(oddpos, 0);
        else return getcost(evenpos, 0);
    }
};