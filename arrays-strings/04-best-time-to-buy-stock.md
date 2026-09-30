## Problem: Best Time to Buy and Sell Stock (Easy)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
We iterate through the prices array once while keeping track of the minimum price seen so far (`min_price`). For each day's price, we calculate the potential profit if sold on that day (`price - min_price`) and update `max_profit` whenever a higher profit is found.

### Complexity
- Time: $O(n)$ — Single pass through the array of length $n$.
- Space: $O(1)$ — Constant extra space used for tracking variables.

### Notes
In C, initializing `min_price` with `INT_MAX` from `<limits.h>` ensures any valid stock price in the array will correctly update the minimum on the first iteration without out-of-bounds checking.
```[cite: 1]

---

### Quick Check before moving on:
1. File path: `arrays-strings/04-best-time-to-buy-stock.md`[cite: 1]
2. Fix screenshot name in `arrays-strings/`: Rename `04-best-time-to-buy-stock.png.png` to **`04-best-time-to-buy-stock.png`** (or `04-result.png`)[cite: 1, 4].

Ready to start **05-longest-common-prefix** or **06-binary-search**[cite: 1]?