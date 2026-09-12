class Solution {
    public ArrayList<Integer> getDivisors(int n) {
    ArrayList<Integer> arr = new ArrayList<>();
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            arr.add(i);
            
            if(i != n/i){
                arr.add(n/i);
            }
        }
    }
   // Collections.sort(sort);
    Collections.sort(arr);
    return arr;    
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna