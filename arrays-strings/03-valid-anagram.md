## Problem: Valid Anagram (Easy)
**Link:** (https://leetcode.com/problems/valid-anagram/)

### Approach
Used a character frequency array (hash table of size 26) to count the occurrences of each letter in the first string and decrement them using the second string.

### Complexity
- Time: $O(n)$
- Space: $O(1)$ (since the alphabet size is constant at 26)

### Notes
Handled edge cases where strings have different lengths or contain uppercase/lowercase characters.