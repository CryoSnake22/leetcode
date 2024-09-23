class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        dict = {}
        i = 0
        for value in nums:
            if target - value in dict:
                return [dict[target - value], i]
            dict[value] = i
            i += 1
