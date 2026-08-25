class Solution {
  public:
    void rearrange(vector<int> &arr) {
    vector<int> pos;
    vector<int> neg;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>=0) pos.push_back(arr[i]);
        else neg.push_back(arr[i]);
    }
    int i=0;
    int p=0;
    int q=0;
    while(p<pos.size() && q<neg.size()){
        arr[i++] = pos[p++];
        arr[i++] = neg[q++];
    }
    while(p<pos.size()){
        arr[i++] = pos[p++];
    }
    while(q<neg.size()){
        arr[i++]=neg[q++];
    }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna