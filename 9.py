class Solution:
    def isPalindrome(self, x: int) -> bool:
        numstring = str(x)
        j = len(numstring) - 1
        for i in range(len(numstring)):
            if numstring[i] != numstring[j]:
                return False
            j -= 1
            if i == j - 1 or i == j:
                return True
        return True
