# [Alternate Vowel and Consonant String](https://www.geeksforgeeks.org/problems/alternate-vowel-and-consonant-string2939/1)
## Medium
Given a string&nbsp;s&nbsp;of lowercase english characters. Return the&nbsp;lexicographically (alphabetically) smallest&nbsp;string after rearranging characters of the given string such that the vowels and consonants occupy&nbsp;alternate&nbsp;positions.
Note:&nbsp;If it is not possible to form such string from the given string then return string "-1".
Examples:
Input: s = "aeroplane"
Output: "alanepero"
Explanation: "alanepero" is the smallest possible string in lexicographical order where vowels and consonants are placed alternately.

Input: s = "mississippi"
Output: "-1"
Explanation: The number of vowels is 4 and the number of consonants is 7. Hence, there's no way to arrange the vowels and consonants alternatively.

Constraints:1&nbsp;≤&nbsp;n&nbsp;≤ 106 , where n is the size of the string s