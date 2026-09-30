## Problem: Best Time to Buy and Sell Stock (Easy)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
We iterate through the prices array once while keeping track of the minimum price seen so far (`min_price`). For each day's price, we calculate the potential profit if sold on that day (`price - min_price`) and update `max_profit` whenever a higher profit is found.

### Complexity
- Time: O(n) — Single pass through the array of length n.
- Space: O(1) — Constant extra space used for tracking variables.

### Notes
In C, initializing `min_price` with `INT_MAX` from `<limits.h>` ensures any valid stock price in the array will correctly update the minimum on the first iteration without needing extra out-of-bounds checking.