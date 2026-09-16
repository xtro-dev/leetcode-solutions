## Problem: Longest Common Prefix (Easy-Medium)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

The first string is used as the reference prefix. Each character is compared with the corresponding character in every other string until a mismatch or the end of a string is reached.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

If there is no common first character, the result is an empty string.
