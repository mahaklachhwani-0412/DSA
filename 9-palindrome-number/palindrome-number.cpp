#include <climits>
class Solution {
public:
    bool isPalindrome(int x) {
        int n = x, rev = 0, r;
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        while (x != 0) {
            r = x % 10;
            x = x / 10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && r > 7)) {
                return false; 
            }
            rev = rev * 10 + r;
        }
        return n == rev;
    }
};