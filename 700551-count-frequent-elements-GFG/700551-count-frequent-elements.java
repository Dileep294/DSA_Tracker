class Solution {
    public int countOccurence(int[] arr, int k) {
    int n = arr.length;
    HashMap<Integer , Integer> mp = new HashMap<>();
    for(int i=0; i<n; i++){
        mp.put(arr[i],mp.getOrDefault(arr[i],0)+1);
    }
    int count=0;
    for(int it : mp.values()){
        if(it>n/k) count++;
    }  
    return count;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna