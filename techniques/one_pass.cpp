/**
 * One pass technique
 * Given an array of integers nums and an integer target, return indices of the
 * two numbers such that they add up to target.
 *
 * Example:
 * Input: nums = [2, 7, 11, 15], target = 9
 * Output: [0, 1]
 * Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
 */

#include <cstdio>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
  unordered_map<int, int> numMap; // Map to store numbers and their indices
  for (int i = 0; i < nums.size(); i++) {
    int complement =
        target - nums[i]; // Calculate the complement of the current number

    auto it = numMap.find(complement);
    if (it != numMap.end()) { // Check if the complement exists in the map
      return {it->second, i};
    }
    numMap[nums[i]] = i; // Store the current number and its index in the map
  }
  return {};
}

int main() {
  vector<int> arr = {2, 7, 11, 15};
  int target = 9;

  vector<int> result = twoSum(arr, target);
  if (result.empty()) {
    printf("No solution found.\n");
  } else {
    printf("[%d, %d]\n", result[0], result[1]);
  }

  return 0;
}
