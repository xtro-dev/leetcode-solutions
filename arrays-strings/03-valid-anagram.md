## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

A frequency array is used to count the occurrences of each lowercase letter. Characters from the first string increase the counts, while characters from the second string decrease them.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The strings must have the same length, and every character frequency must balance to zero.
