class Solution {
    public int lcs(String s1, String s2) {
    int n=s1.length();
    int m = s2.length();
    int[][] arr = new int[n+1][m+1];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            char ch = s1.charAt(i-1);
            char sh = s2.charAt(j-1);
            if(ch==sh){
                arr[i][j] = 1+arr[i-1][j-1];
            }
            else{
                arr[i][j] = Math.max(arr[i-1][j],arr[i][j-1]);
            }
        }
    }
    return arr[n][m];
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna