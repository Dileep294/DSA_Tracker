class Solution {
    public int convertFive(int n) {
    String s = String.valueOf(n);
    int m = s.length();
    StringBuilder str = new StringBuilder();
    int i=0;
    while(i<m){
        char ch = s.charAt(i);
        if(ch=='0'){
            str.append('5');
        }else{
            str.append(ch);
        }
        i++;
    }
    String l = str.toString(); 
    int x = Integer.parseInt(l);
    return x;    
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna