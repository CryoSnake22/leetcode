#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    unordered_map<int, int> map;
    int j = 0;
    int count = 0;
    int recnum;
    for (int i = 0; i < nums.size(); i++) {
      if (recnum != nums[i] && i != 0) {
        count = 0;
      }
      count++;
      if (count > 2) {
        continue;
      }
      nums[j] = nums[i];
      j++;
      recnum = nums[i];
    }
    return j;
  }
};

// class Solution {
// public:
//   int removeDuplicates(vector<int> &nums) {
//     unordered_map<int, int> map;
//     int j = 0;
//     for (int i = 0; i < nums.size(); i++) {
//       map[nums[i]]++;
//       if (map[nums[i]] > 2) {
//         continue;
//       }
//       nums[j] = nums[i];
//       j++;
//     }
//     return j;
//   }
// };
