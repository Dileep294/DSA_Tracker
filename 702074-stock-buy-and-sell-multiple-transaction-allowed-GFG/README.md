# [Stock Buy and Sell – Multiple Transaction Allowed](https://www.geeksforgeeks.org/problems/stock-buy-and-sell2615/1)
## Medium
Given an integer array prices[], where prices[i] is the price of a given stock on the ith day. Each day you may decide to either buy or sell the stock at price[i], you can even buy and sell the stock on the same day, return the maximum profit that you can get.
Note: A stock can only be sold if it has been bought previously and multiple stocks cannot be held on any given day.
Examples:
Input: prices[] = [100, 180, 260, 310, 40, 535, 695]Output: 865Explanation: Buy the stock on day 0 and sell it on day 3 =&gt; 310 – 100 = 210. Buy the stock on day 4 and sell it on day 6 =&gt; 695 – 40 = 655. Maximum Profit = 210 + 655 = 865.Input: prices[] = [4, 2, 2, 2, 4]Output: 2Explanation: Buy the stock on day 3 and sell it on day 4 =&gt; 4 – 2 = 2. Maximum Profit = 2.
Constraints:1&nbsp;≤&nbsp;prices.size()&nbsp;≤&nbsp;1050&nbsp;≤&nbsp;prices[i]&nbsp;≤&nbsp;104