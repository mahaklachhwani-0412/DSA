class Solution {
public:
    int reverse(int n) {
        long result = 0;
        while (n) {
            result = result * 10 + n % 10;
            n /= 10;
        }
        return (result > INT_MAX || result < INT_MIN) ? 0 : result;
    }
};
