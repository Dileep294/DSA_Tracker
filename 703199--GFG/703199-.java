class Solution {
    public String longestCommonPrefix(String arr[]) {
    String pre = arr[0];
    int n = arr.length;
    for(int i=1; i<n; i++){
        while(!arr[i].startsWith(pre)){
            pre = pre.substring(0,pre.length()-1);
        }
    }
    return pre;   
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna