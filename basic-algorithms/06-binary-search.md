## Problem: Binary Search (Easy-Medium)
**Link:** https://leetcode.com/problems/binary-search/

### Approach
Used the classic binary search technique — repeatedly halve the search range by comparing the middle element to the target. If the middle value is less than the target, search the right half; if greater, search the left half. Continue until the target is found or the range is empty.

### Complexity
- Time: O(log n) — the search space is halved on each iteration.
- Space: O(1) — no extra space used beyond a few variables.

### Notes
Tested with a typical case (target found in the middle of the array), an edge case where the target isn't present, and an edge case with a single-element array.