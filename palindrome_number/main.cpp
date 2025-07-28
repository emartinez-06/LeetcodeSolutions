class Solution {
   public:
    bool isPalindrome(int x) {
        // Negative numbers can't be palindromes
        if (x < 0)
            return false;

        ostringstream oss;
        oss << x;
        string str = oss.str();

        int i = 0;
        int j = str.size() - 1;

        while (i < j) {
            if (str[i] != str[j]) {
                return false;
            }
            ++i;
            --j;
        }

        return true;
    }
};
