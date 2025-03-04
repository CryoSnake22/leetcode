#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int j = 0;
    int maxProfit = 0;
    for (int i = 1; i < prices.size(); i++) {
      if (prices[i] < prices[j]) {
        j = i;
      }
      if (prices[i] - prices[j] > maxProfit) {
        maxProfit = prices[i] - prices[j];
      }
    }
    return maxProfit;
  }
};
