function kidsWithCandies(candies: number[], extraCandies: number): boolean[] {
  let max: number = 0;
  let maxes: boolean[] = [];
  candies.forEach((e) => {
    if (e > max) {
      max = e;
    }
  });
  for (let i = 0; i < candies.length; i++) {
    if (candies[i] + extraCandies >= max) {
      maxes.push(true);
    } else {
      maxes.push(false);
    }
  }
  return maxes;
}
