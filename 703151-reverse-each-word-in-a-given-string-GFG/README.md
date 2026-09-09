# [Reverse each word in a given string](https://www.geeksforgeeks.org/problems/reverse-each-word-in-a-given-string1001/1)
## Medium
You are given a string s. You need to reverse each word in it where the words are separated by spaces and return the modified string.
Note:&nbsp;The string may contain leading or trailing spaces, or multiple spaces between two words. The returned string should only have a&nbsp;single space&nbsp;separating the words, and&nbsp;no extra spaces should be included.
Examples:
Input: s = " i like this program very much "
Output: "i ekil siht margorp yrev hcum"
Explanation: The words are reversed as follows:"i" -&gt; "i","like"-&gt;"ekil",
"this"-&gt;"siht","program" -&gt; "margorp",
"very" -&gt; "yrev","much" -&gt; "hcum".
Input: s = " pqr mno "
Output: "rqp onm"
Explanation: The words are reversed as follows:"pqr" -&gt; "rqp" ,
"mno" -&gt; "onm"
Input: s = "pqr"
Output: "rqp"
Explanation: The words are reversed as follows:"pqr" -&gt; "rqp"
Constraints:1 &lt;= s.size() &lt;= 105string&nbsp;s&nbsp;contains only lowercase English alphabets and spaces