class Solution {
public:
    int expandFromCenter(string& s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1;
    }

    string longestPalindrome(string s) {
        int n = s.length();
        if (n <= 1) 
            return s;

        int start = 0, maxLength = 1;

        for (int i = 0; i < n; i++) {

            // Odd-length palindrome
            int len1 = expandFromCenter(s, i, i);     
            // Even-length palindrome
            int len2 = expandFromCenter(s, i, i + 1); 

            int len = max(len1, len2);
            if (len > maxLength) {
                maxLength = len;
                start = i - (len - 1) / 2;
            }
        }

        return s.substr(start, maxLength);
    }
};
