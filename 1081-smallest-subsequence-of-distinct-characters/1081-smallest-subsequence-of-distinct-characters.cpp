class Solution {
public:
    string smallestSubsequence(string s) {
    int n = s.size();
    vector<int> lastidx(26);
    for(int i=0; i<n; i++){
        char ch = s[i];
        lastidx[ch-'a'] = i;
    }   
    string ans = "";
    vector<bool> taken(26,false);
    for(int i=0; i<n; i++){
        char ch = s[i];
        int idx = ch-'a';
        if(taken[idx]==true) continue;

        while(ans.size()>0 && ans.back() > ch && lastidx[ans.back()-'a'] > i){
            taken[ans.back()-'a']=false;
            ans.pop_back();
        } 
        ans.push_back(ch);
        taken[idx]=true;
    }  
    return ans;   
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna