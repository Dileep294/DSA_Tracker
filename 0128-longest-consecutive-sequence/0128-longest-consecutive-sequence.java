class Solution {
    public int longestConsecutive(int[] nums) {
    HashMap<Integer,Integer> mp = new HashMap<>();    
    for(int num : nums){
        mp.put(num,1);
    } 
    int maxx=0;
    for(int num : mp.keySet()){
        if(!mp.containsKey(num-1)){
            int count=1;
            int curr = num;
            while(mp.containsKey(curr+1)){
                count++;
                curr++;
            }
            maxx = Math.max(maxx,count);
        }
    }
    return maxx;  
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna