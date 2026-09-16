## Problem: Valid Parentheses (Easy-Medium)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

A stack stores opening brackets. When a closing bracket is encountered, it must match the most recently stored opening bracket. The expression is valid only when all brackets match and the stack is empty at the end.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The last opening bracket must be matched first, which makes a stack appropriate for this problem.
