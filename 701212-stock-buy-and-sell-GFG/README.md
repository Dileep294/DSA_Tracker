# [Stock buy and sell](https://www.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/1)
## Medium
Given an array&nbsp;arr[] denoting&nbsp;the cost of stock on each day, the task is to find the maximum total profit if we can buy and sell the stocks any number of times.
Note:&nbsp;We can only sell a stock which we have bought earlier and we cannot hold multiple stocks on any day.
Examples:
Input: arr[] = [100, 180, 260, 310, 40, 535, 695]
Output: 865
Explanation: Buy the stock on day 0 and sell it on day 3 =&gt; 310 – 100 = 210 Buy the stock on day 4 and sell it on day 6 =&gt; 695 – 40 = 655 Maximum Profit  = 210 + 655 = 865
Input: arr[] = [4, 2, 2, 2, 4]
Output: 2
Explanation: Buy the stock on day 3 and sell it on day 4 =&gt; 4 – 2 = 2
Input: arr[] = [4, 2]
Output: 0
Explanation: Don't Buy the stock.
Constraints:2 ≤ arr.size() ≤ 1060 ≤ arr[i] ≤ 106