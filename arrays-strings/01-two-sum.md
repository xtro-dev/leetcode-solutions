## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

The solution checks every possible pair of elements in the array using two nested loops. When a pair adds up to the target, the indices of those two elements are returned.

### Complexity

- Time: O(n²)
- Space: O(1) excluding the returned array

### Notes

The second index starts from `i + 1`, so the same array element is not used twice.
