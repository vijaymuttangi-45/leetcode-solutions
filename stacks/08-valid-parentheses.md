## Problem: Valid Parentheses (Easy-Medium)
**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
Used a stack to track opening brackets as they're encountered. For every closing bracket, check if it matches the most recently seen opening bracket (the top of the stack). If there's a mismatch, or a closing bracket appears when the stack is empty, the string is invalid. At the end, the string is valid only if the stack is completely empty (all brackets matched).

### Complexity
- Time: O(n) — single pass through the string.
- Space: O(n) — worst case, the stack holds every character (e.g., a string of all opening brackets).

### Notes
Tested with a typical valid case (mixed bracket types in correct order), an edge case with mismatched bracket types in the wrong order, and an edge case with an unmatched closing bracket.