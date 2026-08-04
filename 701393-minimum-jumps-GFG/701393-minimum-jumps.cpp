class Solution {
  public:
    int minJumps(vector<int>& arr) {
    int n = arr.size();
    if(n <= 1) return 0;
    if(arr[0] == 0) return -1;
    int jump = 0, end =0, highest = 0;
    for(int i=0; i<n-1; i++){
        highest = max(highest, i+arr[i]);
        
        if(i == end){
            jump++;
            end = highest;
            
            if(end <= i) return -1; 
        }
    }
    return jump; 
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna