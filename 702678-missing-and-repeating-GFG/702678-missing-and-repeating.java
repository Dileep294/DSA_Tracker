class Solution {
    ArrayList<Integer> findTwoElement(int arr[]) {
    // ArrayList<Integer> nums = new ArrayList<>();
    // for(int i=0; i<arr.length; i++){
    //     nums.add(arr[i]);
    // }
    Arrays.sort(arr);
    int repeat=0;
    int miss = 0;
    int n = arr.length;
    boolean[] check = new boolean[n + 1];
    for(int i=0; i<arr.length-1; i++){
        if(arr[i]==arr[i+1]) repeat = arr[i];
        check[arr[i]]=true;
    }
    check[arr[n-1]]=true;
    ArrayList<Integer> ans = new ArrayList<>();
    ans.add(repeat);
    for(int i=1; i<=n; i++){
        if(check[i]==false) miss=i;
    }
    ans.add(miss);
    return ans;
    }
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna