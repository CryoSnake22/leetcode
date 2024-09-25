#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies) {
    int max = 0;
    int size = candies.size();

    vector<bool> maxcandies;
    for (int i = 0; i < size; i++) {
      if (candies[i] > max) {
        max = candies[i];
      }
    }
    for (int i = 0; i < size; i++) {
      if (candies[i] + extraCandies >= max) {
        maxcandies.push_back(true);
      } else {
        maxcandies.push_back(false);
      }
    }
    return maxcandies;
  }
};
