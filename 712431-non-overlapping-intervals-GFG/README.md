# [Non-Overlapping Intervals](https://www.geeksforgeeks.org/problems/non-overlapping-intervals/1)
## Medium
Given a 2D array intervals[][] of size n, where intervals[i] = [starti, endi]. Return the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.
Note: Two intervals are considered non-overlapping if the end time of one interval is less than or equal to the start time of the next interval.
Examples:
Input: intervals[][] = [[1, 2], [2, 3], [3, 4], [1, 3]]Output: 1Explanation: [1, 3] can be removed and the rest of the intervals are non-overlapping.
Input: intervals[][] = [[1, 3], [1, 3], [1, 3]]Output: 2Explanation: You need to remove two [1, 3] to make the rest of the intervals non-overlapping.
Input: intervals[][] = [[1, 2], [5, 10], [18, 35], [40, 45]]Output: 0Explanation: All intervals are already non-overlapping.
Constraints:1 ≤ n ≤&nbsp; 1050 ≤ starti&nbsp;&lt; endi ≤ 5*104