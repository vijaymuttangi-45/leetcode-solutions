## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
Count each letter's frequency using a fixed 26-element array (indexed
by s[i] - 'a'). Increment counts while scanning s, decrement while
scanning t. If lengths differ, return false immediately. If any
count is nonzero at the end, the strings aren't anagrams.

### Complexity
- Time: O(n) — two single passes over the strings, plus a fixed
  26-element check
- Space: O(1) — the count array has a fixed size regardless of input

### Notes
This only works for lowercase English letters, per the problem's
constraints. For Unicode input, a hash map keyed by character would
be needed instead of a fixed-size array.