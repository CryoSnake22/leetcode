#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  int majorityElement(vector<int> &nums) {
    unordered_map<int, int> map;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
      if (map.count(nums[i]) == 0) {
        map[nums[i]] = 1;
      } else {
        map[nums[i]]++;
      }
      if (map[nums[i]] > n / 2) {
        return nums[i];
      }
    }
    return false;
  }
};
