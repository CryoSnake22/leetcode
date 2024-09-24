function gcdOfStrings(str1: string, str2: string): string {
  if (str1 + str2 == str2 + str1) {
    return str1.substring(0, gcd(str1.length, str2.length));
  } else {
    return "";
  }
}
function gcd(a: number, b: number): number {
  let t: number;
  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }
  return a;
}
