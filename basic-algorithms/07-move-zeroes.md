## Problem: Move Zeroes (Easy-Medium)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

A position pointer tracks where the next non-zero value should be placed. After all non-zero elements have been moved forward, the remaining positions are filled with zeroes.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The relative order of the non-zero elements is preserved.
