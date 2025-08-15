#include <cmath>
class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;
        double val = log(n) / log(4);
        return floor(val) == val; // check if integer
    }
};
