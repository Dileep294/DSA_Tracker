class Solution {
    void help(List<Integer> arr, List<List<Integer>> ans, int[] nums,int i){
        if(i==nums.length){
            ans.add(new ArrayList(arr));
            return;
        }
        arr.add(nums[i]);
        help(arr,ans,nums,i+1);
        arr.remove(arr.size()-1);
        int idx = i+1;
        while(idx<nums.length && nums[idx]==nums[idx-1]){
            idx++;
        }
        help(arr,ans,nums,idx);
    }
    public List<List<Integer>> subsetsWithDup(int[] nums) {
    Arrays.sort(nums);
    List<Integer> arr = new ArrayList<>();
    List<List<Integer>> ans = new ArrayList<>();
    help(arr,ans,nums,0);
    return ans;    
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna