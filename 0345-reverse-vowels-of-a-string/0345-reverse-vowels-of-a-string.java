class Solution {
    void swap(char[] arr, int i,int j){
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    public String reverseVowels(String s) {
    int n = s.length();
    char[] arr =  s.toCharArray();
    int i=0,j=n-1;
    while(i<j){
        while(i<j && "aeiouAEIOU".indexOf(arr[i]) ==-1){
            i++;
        }
        while(i<j && "aeiouAEIOU".indexOf(arr[j]) ==-1){
            j--;
        }
        swap(arr,i,j);
        i++;
        j--;
    } 
    return new String(arr);
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna