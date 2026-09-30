## Problem: Longest Common Prefix (Easy-Medium)
**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
Start by assuming the first string is the common prefix. Then compare it character-by-character against each subsequent string, shrinking the prefix at the first point of mismatch. If the prefix becomes empty at any point, stop early since no common prefix exists.

### Complexity
- Time: O(S), where S is the total number of characters across all input strings.
- Space: O(1) extra space, excluding the space used to store the result.

### Notes
Tested with a typical case (common prefix "fl") and an edge case with no common prefix at all, which correctly returns an empty string.
