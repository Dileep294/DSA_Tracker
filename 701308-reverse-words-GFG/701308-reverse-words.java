class Solution {
    public String reverseWords(String s) {
    s = s.replaceAll("^\\.+|\\.+$", "");
    String[] arr = s.split("\\.+");
    int n = arr.length;
    int i=n-1;
    StringBuilder str = new StringBuilder();
    while(i>=0){
        str.append(arr[i]);
        if(i!=0){
            str.append(".");
        }
        i--;
    }
    return str.toString();
    }
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna