#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> num_map;

    for (int i = 0; i < nums.size(); ++i) {
        // iterates through nums vector and calculates complement
        int complement = target - nums[i];

        // if complement already in map done
        // if not insert curr num and ndx into map
        if (num_map.find(complement) != num_map.end()) {
            return {num_map[complement], i};
        }

        num_map[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);
    cout << "Indicies: " << result[0] << ", " << result[1] << endl;

    return 0;
}
