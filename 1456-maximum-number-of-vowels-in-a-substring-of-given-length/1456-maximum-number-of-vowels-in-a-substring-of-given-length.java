class Solution {
    public int maxVowels(String s, int k) {
    int n = s.length();
    // int i=0; 
    // int j=k;
    int count=0;
    int maxx=0;
    for(int i=0; i<k; i++){
        char ch=s.charAt(i);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') count++;
    }   
    maxx=count;
    int i=0;
    int j=k-1; 
    while(j<s.length()-1){
        char ch = s.charAt(j+1);
        char sh = s.charAt(i);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') count++;
        if(sh=='a' || sh=='e' || sh=='i' || sh=='o' || sh=='u') count--;
        j++;
        i++;
        maxx = Math.max(count,maxx);
    }
    return maxx;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna