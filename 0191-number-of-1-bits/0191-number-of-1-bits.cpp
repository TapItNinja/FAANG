class Solution {
public:
    int hammingWeight(int n) {
        int num=1;
        int count=0;
        while(n!=0){
            if(num & n)count++;
            n=n>>1;
        }
        return count;
    }
};