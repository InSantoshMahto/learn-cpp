#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
  unordered_map<int, int> umap;
  for (int i = 0; i < nums.size(); i++)
  {
    int num = nums[i];
    int diff = target - num;
    if (umap.find(diff) != umap.end())
    {
      return vector<int>{umap[diff], i};
    }
    umap[num] = i;
  }
  return vector<int>{};
}

int main()
{
  vector<int> nums = {2, 7, 11, 15};
  int target = 9;
  vector<int> indices = twoSum(nums, target);
  for (int index : indices)
  {
    cout << index << endl;
  }

  return 0;
}
