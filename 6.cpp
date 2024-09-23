#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  string convert(string s, int numRows) {
    int n = s.size();
    unordered_map<int, string> map;
    bool pos = true;
    string ans = "";

    for (int i = 0; i < n; i++) {
      int remainder = (i + 1) % numRows;
      if (pos) {
        map[remainder += s[i]];
      } else {
        map[numRows - remainder] += s[i];
      }

      if () {
        sign *= -1;
      }
    }

    for (int i = 1; i <= map.size(); i++) {
      ans += map[i];
    }
    return ans;
  }
};
