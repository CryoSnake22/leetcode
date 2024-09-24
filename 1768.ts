function mergeAlternately(word1: string, word2: string): string {
  let size = word1.length + word2.length;
  let new_word = "";
  for (let i = 0; i < size; i++) {
    if (i < word1.length) {
      new_word += word1[i];
    }
    if (i < word2.length) {
      new_word += word2[i];
    }
  }
  return new_word;
}
