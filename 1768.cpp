#include <string>
using namespace std;

class Solution {
public:
  string mergeAlternately(string word1, string word2) {
    std::string newWord;
    for (int i = 0; i <= (word1.length() + word2.length()); i++) {
      if (i < word1.length()) {
        newWord += word1[i];
      }
      if (i < word2.length()) {
        newWord += word2[i];
      }
    }
    return newWord;
  }
};
