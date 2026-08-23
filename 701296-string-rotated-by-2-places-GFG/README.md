# [String Rotated by 2 Places](https://www.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1)
## Easy
Given two strings s1 and s2. Return true if the string s2 can be obtained by rotating&nbsp;(in any direction) string s1 by exactly 2 places, otherwise, false.
Note: Both rotations should be performed in same direction chosen initially.
Examples:
Input: s1 = "amazon", s2 = "azonam"
Output: true
Explanation: "amazon" can be rotated anti-clockwise by two places, which will make it as "azonam".

Input: s1 = "geeksforgeeks", s2 = "geeksgeeksfor"
Output: false
Explanation: If we rotate "geeksforgeeks" by two place in any direction, we won't get "geeksgeeksfor".
Input: s1 = "ab", s2 = "ab"
Output: trueExplanation: If we rotate "ab" by two place in any direction, we always get "ab".
Constraints:1 ≤ s1.length, s2.length ≤ 105