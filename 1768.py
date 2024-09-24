class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        size = len(word1 + word2)
        new_word = ""
        for i in range(size):
            if i < len(word1):
                new_word += word1[i]
            if i < len(word2):
                new_word += word2[i]
        return new_word
