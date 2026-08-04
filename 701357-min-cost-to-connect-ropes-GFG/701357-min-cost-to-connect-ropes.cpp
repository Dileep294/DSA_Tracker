class Solution {
  public:
    int minCost(vector<int>& arr) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int num : arr){
        pq.push(num);
    }
    int cost = 0;
    while(pq.size()>1){
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        int sum = a+b;
        cost += sum;
        pq.push(sum);
    } 
    return cost;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna