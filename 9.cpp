#include <_ctype.h>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  int isPalindrome(int x) {
    string number = to_string(x);
    int j = number.length() - 1;
    for (int i = 0; i < j; i++) {
      if (number[j] != number[i]) {
        return false;
      }
      j--;
    }
    return true;
  }
};
