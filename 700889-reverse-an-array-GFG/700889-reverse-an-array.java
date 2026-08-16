class Solution {
    void swap(int[] arr,int a,int b){
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
    public void reverseArray(int arr[]) {
    int n = arr.length;
    int i=0;
    int j = n-1;
    while(i<j){
        swap(arr,i,j);
        i++;
        j--;
    }
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna