class Solution {
public:
    bool isPalindrome(string s) {
    string result="";
    for(char c : s){
        if(isalnum(c)){
           result += tolower(c);
        }
    }  
    int i=0;
    int j = result.size()-1;
    while(i<j){
        if(result[i]!=result[j]) return false;
        i++;
        j--;
    }
    return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna