#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  int lengthOfLastWord(string s) {
    bool isWord = false;
    int length = 0;
    int n = s.size();
    for (int i = n - 1; i >= 0; i--) {
      if (s[i] == ' ') {
        if (!isWord) {
          continue;
        } else {
          return length;
        }
      }
      isWord = true;
      length++;
    }
    return length;
  }
};
