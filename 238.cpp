#include <algorithm>
#include <numeric>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {

    unordered_map<int, int> map;
    int n = nums.size();
    int wat = 0;
    for (int i = 0; i < n; i++) {
      if (nums[i] != 0) {
        map[nums[i]]++;
      }
    }
  }
};
// too hard Idk
