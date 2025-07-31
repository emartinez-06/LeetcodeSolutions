#include <iostream>

using namespace std;

class Solution {
   public:
    bool isValid(string s) {
        int bracket = 0;
        int parentheses = 0;
        int curl = 0;
        for (int i = 0; i <= s.size() - 1; ++i) {
            if (s.at(i) == '[' || s.at(i) == ']') {
                bracket += 1;
            } else if (s.at(i) == '{' || s.at(i) == '}') {
                curl += 1;
            } else if (s.at(i) == '(' || s.at(i) == ')') {
                parentheses += 1;
            }
        }
        if (curl % 2 == 0 && bracket % 2 == 0 && parentheses % 2 == 0) {
            return true;
        }
        return false;
    }
};
int main() {
    cout << "valid_parenteses\n";
    string str1 = "{[]}";
    string str2 = "[[[}";
    Solution sol;

    cout << sol.isValid(str1) << endl;
    cout << sol.isValid(str2) << endl;

    return 0;
}
