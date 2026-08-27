class Solution {
  public:
    bool allZero(vector<int> &freq){
        int n = freq.size();
        for(int i=0; i<n; i++){
            if(freq[i]!=0) return false;
        }
        return true;
    }
    int search(string &pat, string &txt) {
    int n = txt.size();
    vector<int> freq(26,0);
    for(int i=0; i<pat.size(); i++){
        freq[pat[i]-'a']++;
    }
    int i=0;
    int j=0; 
    int k = pat.size();
    int ans=0;
    
    while(j<n){
        freq[txt[j]-'a']--;
        if(j-i+1==k){
            if(allZero(freq)){
                ans++;
            }
            freq[txt[i]-'a']++;
            i++;
        }
        j++;
    }
    return ans;   
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna