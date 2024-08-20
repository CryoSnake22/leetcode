#include <algorithm>
#include <string>
#include <vector>

class Solution {
public:
  bool canJump(std::vector<int> &nums) {
    int n = nums.size();
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
      ans = std::max(nums[i], ans - 1);

      if (i + ans == n - 1) {
        return true;
      }
      if (ans <= 0) {
        return false;
      }
    }
    return true;
  }
};

// This is kind of a mind fuck so I need to wrap my mind around it
// Ans is basically keeping track of the furthest jump we can make, if we arrive
// somewhere and the number at nums[i] is bigger then we just extended our reach
// so ans is equal to nums[i].
