class Solution {
public:
    int primeSubarray(vector<int>& nums, int k) {
        const int MAX_NUM=50001;
        int n=nums.size();
        vector<bool>isPrime(MAX_NUM, true);
        isPrime[0]=isPrime[1]=false;
        for(int p=2; p*p<MAX_NUM; p++){
            if(isPrime[p]){
                for(int i=p*p; i<MAX_NUM; i+=p){
                    isPrime[i]=false;
                }
            }
        }
        vector<int>primeidx;
        for(int i=0; i<n; i++){
            if(nums[i]<MAX_NUM && isPrime[nums[i]]){
                primeidx.push_back(i);
            }
        }
        if(primeidx.size()<2)return 0;
        vector<int>p;
        p.push_back(-1);
        for(int idx:primeidx)p.push_back(idx);
        p.push_back(n);
        vector<long long>prefix(p.size(), 0);
        for(int i=1; i<p.size(); i++){
            prefix[i]=prefix[i-1]+(p[i]-p[i-1]);
        }
        long long count=0;
        int left=1;
        multiset<int>wind;
        for(int right=1; right<p.size()-1; right++){
            wind.insert(nums[p[right]]);
            while(!wind.empty() && *wind.rbegin()-*wind.begin()>k){
                wind.erase(wind.find(nums[p[left]]));
                left++;
            }
            if(left<right){
                long long starts=prefix[right-1]-(left>1?prefix[left-1]:0);
                long long ends=p[right+1]-p[right];
                count+=starts*ends;
            }
        }
        return count;
    }
};