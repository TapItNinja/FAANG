#include <numeric>
#include <algorithm>

class Solution {
public:
    long long createPalindrome(long long num, bool is_odd_length) {
        long long temp_num = num;
        if (is_odd_length) {
            temp_num /= 10;
        }
        while (temp_num > 0) {
            num = num * 10 + temp_num % 10;
            temp_num /= 10;
        }
        return num;
    }

    bool isPalindrome(long long num, int base) {
        std::vector<int> digits;
        while (num > 0) {
            digits.push_back(num % base);
            num /= base;
        }
        int left = 0;
        int right = digits.size() - 1;
        while (left < right) {
            if (digits[left++] != digits[right--]) {
                return false;
            }
        }
        return true;
    }

    long long kMirror(int k, int n) {
        long long total_sum = 0;
        long long current_len_prefix = 1;

        while (n > 0) {
            for (long long left_half_num = current_len_prefix; n > 0 && left_half_num < current_len_prefix * 10; ++left_half_num) {
                long long palindrome_base10 = createPalindrome(left_half_num, true);
                if (isPalindrome(palindrome_base10, k)) {
                    total_sum += palindrome_base10;
                    n--;
                }
            }

            for (long long left_half_num = current_len_prefix; n > 0 && left_half_num < current_len_prefix * 10; ++left_half_num) {
                long long palindrome_base10 = createPalindrome(left_half_num, false);
                if (isPalindrome(palindrome_base10, k)) {
                    total_sum += palindrome_base10;
                    n--;
                }
            }
            current_len_prefix *= 10;
        }
        return total_sum;
    }
};