## Problem: Reverse a String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

Two pointers are used, with one starting at the beginning and the other at the end of the character array. The characters at these positions are swapped, and both pointers move toward the center.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution modifies the character array in place. A single-character input requires no swaps.
