#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int next;
    int prev;
    int buypos;
    int profit = 0;
    int n = prices.size();
    if (n == 1) {
      return 0;
    }
    for (int i = 0; i < n; i++) {
      next = i + 1;
      prev = i - 1;
      if (i != 0 && i != n - 1) {
        if (prices[prev] < prices[i] && prices[i] >= prices[next]) {
          profit = profit + (prices[i] - prices[buypos]);
        }
        if (prices[prev] >= prices[i] && prices[i] <= prices[next]) {
          buypos = i;
        }
      } else if (i == 0) {
        if (prices[next] >= prices[i]) {
          buypos = i;
        }
      } else if (i == n - 1) {
        if (prices[prev] < prices[i]) {
          profit = profit + (prices[i] - prices[buypos]);
        }
      }
    }
    return profit;
  }
};
