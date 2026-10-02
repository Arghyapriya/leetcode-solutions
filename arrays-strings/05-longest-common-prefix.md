## Problem: Longest Common Prefix (Easy)
**Link:** (https://leetcode.com/problems/longest-common-prefix/description/)

### Approach
Compared characters of the first string vertically against all other strings until a mismatch or end of string was reached.

### Complexity
- Time: $O(S)$ where $S$ is the sum of all characters in all strings
- Space: $O(1)$

### Notes
Handled edge cases like an empty array or a single string input.