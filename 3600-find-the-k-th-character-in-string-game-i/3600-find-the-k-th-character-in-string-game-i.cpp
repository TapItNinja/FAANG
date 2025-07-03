class Solution {
public:
    char kthCharacter(int k) {
        int shift = 0;
        long long length = 1;
        
        // Find the largest power of 2 <= k
        while (length * 2 < k) {
            length *= 2;
        }
        
        // Iteratively work backwards to reduce k to 1
        while (k > 1) {
            if (k > length) {
                k -= length;   // Map k to first half
                shift += 1;    // +1 shift for characters from second half
            }
            
            // Recalculate length for previous iteration
            length /= 2;
        }
        
        // Base character is 'a' with total accumulated shift
        return (char)('a' + shift % 26);
    }
};
