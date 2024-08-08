#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  int romanToInt(string s) {
    int result = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
      if (i != 0 && intizer(s[i]) > intizer(s[i - 1])) {
        result -= intizer(s[i - 1]);
        result += intizer(s[i]);
        i--;
        continue;
      }
      result += intizer(s[i]);
    }
    return result;
  }
  int intizer(char c) {
    switch (c) {
    case 'I':
      return 1;
    case 'V':
      return 5;
    case 'X':
      return 10;
    case 'L':
      return 50;
    case 'C':
      return 100;
    case 'D':
      return 500;
    case 'M':
      return 1000;
    }
    return 0;
  }
};
