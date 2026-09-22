class Solution {
    public int secFrequent(String[] arr) {
    HashMap<String, Integer> mp = new HashMap<>();
    for(int i=0; i<arr.length; i++){
        String s = arr[i];
        mp.put(s,mp.getOrDefault(s,0)+1);
    }
    int maxx=0;
    int sec = 0;
    for(int it : mp.values()){
        if(it>maxx){
            sec = maxx;
            maxx = it;
        }
        else if(it>sec && it<maxx){
            sec = it;
        }
    }
    if(sec==0) return -1;
    return sec;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna