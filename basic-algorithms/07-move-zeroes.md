## Problem: Move Zeroes (Easy-Medium)
**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
Used a two-pointer technique — one pointer (`insertPos`) tracks where the next non-zero element should be placed. Iterate through the array once, copying non-zero elements to the front in their original order. After this pass, fill all remaining positions with zeroes.

### Complexity
- Time: O(n) — single pass through the array.
- Space: O(1) — done in-place, no extra array used.

### Notes
Tested with a typical case (mixed zeroes and non-zeroes), an edge case with all zeroes, and an edge case with no zeroes at all.
