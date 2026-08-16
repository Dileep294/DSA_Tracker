class Solution {
    void swap(char[] s,int a,int b){
        char temp = s[a];
        s[a] = s[b];
        s[b] = temp;
    }
    public void reverseString(char[] s) {
    int n = s.length;
    int i=0; 
    int j = n-1;
    while(i<j){
        swap(s,i,j);
        i++;
        j--;
    }
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna