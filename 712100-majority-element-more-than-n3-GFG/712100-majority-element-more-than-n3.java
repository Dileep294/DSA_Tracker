class Solution {
    public ArrayList<Integer> findMajority(int[] arr) {
    HashMap<Integer,Integer> mp = new HashMap<>();
    int n = arr.length;
    for(int i=0; i<arr.length; i++){
        mp.put(arr[i],mp.getOrDefault(arr[i],0)+1);
    }
    ArrayList<Integer> ans = new ArrayList<>();
    for(int x : mp.keySet()){
        if(mp.get(x) > n/3) ans.add(x);
    }
    Collections.sort(ans);
    return ans;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna