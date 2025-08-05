#include <iostream>
#include <vector>

using namespace std;

class Solution {
   public:
    int removeDuplicates(vector<int> &nums) {
        int slow = 0;

        for (int fast = 1; fast < nums.size(); ++fast) {
            if (nums[fast] != nums[slow]) {
                slow++;
                nums[slow] = nums[fast];
            }
        }
        return slow + 1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 4};

    int k = sol.removeDuplicates(nums);

    cout << "Number of unique elements (k); " << k << endl;

    return 0;
}
