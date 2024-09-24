function isPalindrome(x: number): boolean {
  let numstring: string = x.toString();
  let j: number = numstring.length - 1;
  for (let i = 0; i < numstring.length; i++) {
    if (numstring[i] != numstring[j]) {
      return false;
    }
    if (i == j || i == j - 1) {
      return true;
    }
    j--;
  }
  return true;
}
