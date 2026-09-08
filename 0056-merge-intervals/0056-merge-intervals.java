class Solution {
    public int[][] merge(int[][] intervals) {
    int n = intervals.length;
    Arrays.sort(intervals,(a,b)->Integer.compare(a[0],b[0])); 
    List<List<Integer>> ans = new ArrayList<>(); 
    int[] temp = intervals[0];
    for(int i=1; i<n; i++){
        if(temp[1] >= intervals[i][0]){
            temp[1] = Math.max(temp[1],intervals[i][1]);
        }
        else{
            ans.add(Arrays.asList(temp[0],temp[1]));
            temp = intervals[i];
        }
    } 
    ans.add(Arrays.asList(temp[0],temp[1]));
    int[][] arr = new int[ans.size()][2];
    for(int i=0; i<ans.size(); i++){
        arr[i][0] = ans.get(i).get(0);
        arr[i][1] = ans.get(i).get(1);
    }
    return arr;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna