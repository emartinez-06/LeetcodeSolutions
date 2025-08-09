#include <iostream>

using namespace std;

class Solution {
   public:
    int strStr(string haystack, string needle) {
        if (needle.size() > haystack.size()) {
            return -1;
        }

        // Sliding window problem
        int n = haystack.size();
        int m = needle.size();

        for (int i = 0; i <= n - m; ++i) {
            int j = 0;
            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == m)
                return i;
        }
        return -1;
    }
};

int main() {
    cout << "find_the_index\n";
    Solution sol;

    string haystack = "sadbadsad";
    string needle = "sad";

    cout << sol.strStr(haystack, needle);

    return 0;
}
