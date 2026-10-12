class Solution {
  public:
    int longestKSubstr(string &s, int k) {
    unordered_map<char, int> mp;
    int maxx=0;
    int left=0;
    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
        while(mp.size()>k){
            mp[s[left]]--;
            if(mp[s[left]]==0){
                mp.erase(s[left]);
            }
            left++;
        }
        maxx = max(maxx,i-left+1);
    }
    if(mp.size()<k) return -1;
    return maxx;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna