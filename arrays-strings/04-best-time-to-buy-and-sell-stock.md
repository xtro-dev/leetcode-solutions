## Problem: Best Time to Buy and Sell Stock (Easy-Medium)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

The minimum stock price seen so far is tracked while scanning the array. For each price, the possible profit from buying at the minimum price and selling at the current price is calculated.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The stock must be bought before it is sold, so only previously seen prices are considered.
