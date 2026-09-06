class Solution {
    void help(ArrayList<Integer> arr, List<List<Integer>> ans,int[] nums,int i){
        if(i==nums.length){
            ans.add(new ArrayList<Integer>(arr));
            return;
        }
        help(arr,ans,nums,i+1);
        arr.add(nums[i]);
        help(arr,ans,nums,i+1);
        arr.remove(arr.size()-1);
    }
    public List<List<Integer>> subsets(int[] nums) {
    ArrayList<Integer> arr = new ArrayList<>();
    List<List<Integer>> ans = new ArrayList<>();
    help(arr,ans,nums,0);
    return ans;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna