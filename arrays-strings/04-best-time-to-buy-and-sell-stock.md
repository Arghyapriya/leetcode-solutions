## Problem: Best Time to Buy and Sell Stock (Easy)
**Link:** (https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/)

### Approach
Iterated through the array while keeping track of the minimum price seen so far and calculating the potential profit at each step.

### Complexity
- Time: $O(n)$
- Space: $O(1)$

### Notes
Handled edge cases where prices are strictly decreasing (zero profit).