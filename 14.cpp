#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    string res = "";
    sort(strs.begin(), strs.end());
    int n = strs.size();
    string first = strs[0];
    string last = strs[n - 1];
    for (int i = 0; i < min(first, last).size(); i++) {
      // this iterates over all indices, so it goes from index 0 to the highest
      // index of the smallest word
      for (int j = 0; j < n; j++) {
        // this checks every word at a given index to check if all of them match
        if (strs[j][i] != first[i]) {
          // if its not equal to all the others then we need to stop our program
          // and return the answer since clearly the prefix has been reached
          return res;
        }
      }
      res += first[i];
    }
    return res;
  }
};
