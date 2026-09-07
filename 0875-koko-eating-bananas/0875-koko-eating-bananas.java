class Solution {
    boolean canEat(int[] piles,int mid, int h){
        int total = 0;
        for(int i=0; i<piles.length; i++){
            total += piles[i]/mid;
            if(piles[i]%mid!=0){
                total++;
            }
        }
        return total <= h;
    }
    public int minEatingSpeed(int[] piles, int h) {
    int maxx = 1;
    for(int i=0; i<piles.length; i++){
        if(piles[i]>maxx){
            maxx = piles[i];
        }
    }
    int lo = 1;
    int hi = maxx;
    while(lo<hi){
        int mid = (lo+hi)/2;
        if(canEat(piles,mid,h)) hi = mid;
        else lo = mid+1;
    }
    return lo;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna