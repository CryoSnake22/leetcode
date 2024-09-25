class Solution:
    def kidsWithCandies(self, candies: list[int], extraCandies: int) -> list[bool]:
        maxcandy = max(candies)
        maxes: list[bool] = []
        for i in range(len(candies)):
            if (candies[i] + extraCandies) >= maxcandy:
                maxes.append(True)
            else:
                maxes.append(False)
        return maxes
