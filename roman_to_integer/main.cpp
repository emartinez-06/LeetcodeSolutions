#include <iostream>

using namespace std;

class Solution {
   public:
    int value(char c) {
        switch (c) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        }
    }

    int romanToInt(string s) {
        int total = 0;
        int n = s.length();

        for (int i = 0; i < n; ++i) {
            int curr = value(s[i]);

            int next;
            if (i + 1 < n) {
                next = value(s[i + 1]);
            } else {
                next = 0;
            }

            if (curr < next) {
                total -= curr;
            } else {
                total += curr;
            }
        }

        return total;
    }
};
int main() {
    cout << "roman_to_integer\n";
    Solution sol;
    cout << "MCMXCIV = " << sol.romanToInt("MCMXCIV") << endl; // Should print 1994
    cout << "XLII = " << sol.romanToInt("XLII") << endl;       // Should print 42
    cout << "IX = " << sol.romanToInt("IX") << endl;           // Should print 9

    return 0;
}
