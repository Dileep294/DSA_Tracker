class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
    priority_queue<int> maxheap;
    priority_queue<int, vector<int>,greater<int>> minheap;
    vector<double> res;
    for(int x : arr){
        if(maxheap.empty() || x <= maxheap.top()){
            maxheap.push(x);
        }
        else minheap.push(x);
        
        if(maxheap.size() > minheap.size()+1){
            minheap.push(maxheap.top());
            maxheap.pop();
        }
        
        if(minheap.size() > maxheap.size()){
           maxheap.push(minheap.top());
           minheap.pop();
        }
        
        if(minheap.size()==maxheap.size()){
            res.push_back((minheap.top()+maxheap.top())/2.0);
        }
        else res.push_back(maxheap.top());
    }
    return res;   
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna