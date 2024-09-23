function twoSum(nums: number[], target: number): number[] {
  let dict: { [key: string]: number } = {};
  for (let i = 0; i < nums.length; i++) {
    const element = nums[i];
    if (target - element in dict) {
      return [dict[target - element], i];
    }
    dict[element] = i;
  }
}
