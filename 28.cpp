#include <string>
using namespace std;

class Solution {
public:
  int strStr(string haystack, string needle) {
    // this is a longer solution
    int index_found = -1;
    for (int i = 0; i < haystack.length(); i++) {
      if (haystack[i] == needle[0]) {
        for (int j = 0; j < needle.length(); j++) {
          if (needle[j] != haystack[i + j]) {
            j = 0;
            break;
          } else if (j == needle.length() - 1 && needle[j] == haystack[i + j]) {
            index_found = i;
          }
        }
        if (index_found != -1) {
          break;
        }
      }
    }
    return index_found;
  }
};
