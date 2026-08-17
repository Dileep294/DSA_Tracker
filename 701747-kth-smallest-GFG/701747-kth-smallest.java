class Solution {
    public int kthSmallest(int[] arr, int k) {
    PriorityQueue<Integer> pq = new PriorityQueue<>();
    for(int i=0; i<arr.length; i++){
        pq.add(arr[i]);
    }
    int x = 0;
    while(k>0){
        x = pq.peek();
        pq.poll();
        k--;
    }
    return x;
    }
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna