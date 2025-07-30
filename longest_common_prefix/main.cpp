#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
   public:
    string longestCommonPrefix(vector<string> &strs) {
        if (strs.empty()) {
            return "";
        }

        string prefix = strs[0];
        for (int i = 1; i < strs.size(); ++i) {
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.length() - 1);
                if (prefix.empty()) {
                    return "";
                }
            }
        }
        return prefix;
    }
};

int main() {
    cout << "longest_common_prefix\n";
    Solution sol;
    vector<string> example1 = {"flower", "flow", "flight"};
    vector<string> example2 = {"dog", "racecar", "car"};

    cout << "Example 1: " << sol.longestCommonPrefix(example1) << endl;
    cout << "Example 2: " << sol.longestCommonPrefix(example2) << endl;

    return 0;
}
