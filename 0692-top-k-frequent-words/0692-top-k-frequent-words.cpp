class Solution {
public:
    struct cmp{
        bool operator() (pair<int,string>& a, pair<int,string>& b){
            if(a.first==b.first) return a.second>b.second;
            return a.first < b.first;
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
    unordered_map<string, int> mp;
    for(string word : words){
        mp[word]++;
    }  
    priority_queue<pair<int,string>,vector<pair<int,string>>, cmp> pq;
    for(auto x: mp){
        pq.push({x.second,x.first});

    }
    vector<string> ans;
    while(k--){
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna