#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  void rotate(vector<int> &nums, int k) {
    int n = nums.size();
    vector<int> rotated(n);
    for (int i = 0; i < n; i++) {
      int j = (i + k) % n;
      rotated[j] = nums[i];
    }
    nums = rotated;
  }
};
