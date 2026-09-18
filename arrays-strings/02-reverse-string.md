## Problem: Reverse String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach
Two-pointer swap in place. One pointer starts at index 0, the other at
sSize - 1; swap the characters and move both inward until they meet.
This avoids allocating a second array, which the problem requires.

### Complexity
- Time: O(n) — each character is visited at most once
- Space: O(1) — only a temp char is used

### Notes
Loop condition must be `l < r`, not `l <= r`. With `<=`, an odd-length
array swaps the middle element with itself — harmless here, but a wasted
iteration and a bad habit in problems where the swap has side effects.
Single-element input never enters the loop, which is correct.
