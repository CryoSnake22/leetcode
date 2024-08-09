#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> map;
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
      int complement = target - nums[i];
      if (map.count(complement) != 0) {
        return {map[complement], i};
      }
      map[nums[i]] = i;
    }
    return {};
  }
};
