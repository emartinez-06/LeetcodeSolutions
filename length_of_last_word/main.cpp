#include <iostream>

using namespace std;

class Solution {
   public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int x = 0;

        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == ' ') {
                if (x > 0)
                    break;
            } else {
                ++x;
            }
        }
        return x;
    }
};

int main() {
    cout << "length_of_last_word\n";

    return 0;
}
