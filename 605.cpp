#import <vector>

using namespace std;

class Solution {
public:
  bool canPlaceFlowers(vector<int> &flowerbed, int n) {
    if (n == 0) {
      return true;
    }
    if (flowerbed.size() == 1) {
      if (flowerbed[0] == 0) {
        return true;
      } else {
        return false;
      }
    }

    for (int i = 0; i < flowerbed.size() && n > 0; i++) {
      if (i == 0) {
        if (flowerbed[i] == 0 && flowerbed[i + 1] == 0) {
          n--;
          i++;
        }
        continue;
      }
      if (i == flowerbed.size() - 1) {
        if (flowerbed[i - 1] == 0 && flowerbed[i] == 0) {
          n--;
          i++;
        }
        continue;
      }
      if (flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0) {
        n--;
        i++;
        continue;
      }
    }
    if (n == 0) {
      return true;
    } else {
      return false;
    }
  }
};
