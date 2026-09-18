## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach
Brute force: for each index i, check every later index j to see if
nums[i] + nums[j] equals the target. Return the pair of indices as
soon as a match is found.

### Complexity
- Time: O(n²) — nested loop checks every pair
- Space: O(1) extra (excluding the O(1)-sized output array, which
  must be malloc'd since the return type is a pointer)

### Notes
A faster O(n) approach exists using a hash map (store each value's
index while scanning once, check if target - nums[i] was already
seen) — worth trying next time. Also: the caller is responsible for
freeing the returned array, since LeetCode's C signature requires
malloc'd memory.