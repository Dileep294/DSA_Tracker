class Solution {
public:
    void merge(vector<int>& nums,int st,int mid,int end){
        vector<int> temp;
        int i=st, j=mid+1;
        while(i<=mid && j<=end){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i]);
                i++;
            }else{
                temp.push_back(nums[j]);
                j++;
            }
        }
        while(i<=mid){
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=end){
            temp.push_back(nums[j]);
            j++;
        }
        
        for(int k=st; k<=end; k++){
            nums[k] = temp[k-st];
        }
    }
    void mergesort(vector<int>& nums,int st,int end){
        if(st>=end) return;
        int mid = st + (end-st)/2;
        mergesort(nums,st,mid);
        mergesort(nums,mid+1,end);

        merge(nums,st,mid,end);
        
    }
    vector<int> sortArray(vector<int>& nums) {
    mergesort(nums,0,nums.size()-1);
    return nums;   
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna