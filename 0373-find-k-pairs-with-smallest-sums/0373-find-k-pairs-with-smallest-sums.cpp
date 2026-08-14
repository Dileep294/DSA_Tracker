class Solution {
public:
    typedef pair<int,pair<int,int>> p;
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
    priority_queue<p, vector<p>, greater<p>> pq;
    int n = nums1.size();
    int m = nums2.size();
    int sum = nums1[0] + nums2[0];
    
    set<pair<int,int>> visited;

    pq.push({sum,{0,0}});
    visited.insert({0,0});

    vector<vector<int>> ans;
    while(k-- && !pq.empty()){
        auto temp = pq.top();
        pq.pop();
        int i = temp.second.first;
        int j = temp.second.second;
        ans.push_back({nums1[i],nums2[j]});
        
        if(j+1<m && visited.find({i,j+1})==visited.end()){
            pq.push({nums1[i]+nums2[j+1], {i,j+1} });
            visited.insert({i,j+1});
        }
        if(i+1<n && visited.find({i+1,j})==visited.end()){
            pq.push({nums1[i+1]+nums2[j], {i+1,j}});
            visited.insert({i+1,j});
        }
    } 
    
    return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna