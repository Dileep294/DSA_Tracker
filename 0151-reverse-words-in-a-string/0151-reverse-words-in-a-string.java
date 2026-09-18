class Solution {
    public String reverseWords(String s) {
    String[] arr = s.trim().split("\\s+");
    String str = "";
    int n = arr.length;
    int i = n-1;
    while(i>=0){
        str += arr[i];
        if(i!=0){
            str += " ";
        }
        i--;
    }
    return str;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna