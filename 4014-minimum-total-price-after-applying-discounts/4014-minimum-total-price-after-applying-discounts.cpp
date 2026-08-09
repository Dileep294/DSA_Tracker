class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
    sort(prices.begin(),prices.end());
    sort(discounts.begin(),discounts.end());
    int j = discounts.size()-1;
    int i = prices.size()-1;
    double sum = 0.0;
    while(i>=0){
        if(j>=0){
            sum += prices[i] * (100.0 - discounts[j])/100.0;
            j--;
        }
        else{
            sum += prices[i];
        }
        i--;
    } 
    return sum;   
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna