class Solution {
public:
    int countTriplets(vector<int> &arr, int target) {
        int n = arr.size();
        int count = 0;

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                long long sum = (long long)arr[i] + arr[left] + arr[right];

                if (sum == target) {
                    if (arr[left] == arr[right]) {
                        int len = right - left + 1;
                        count += len * (len - 1) / 2;
                        break;
                    }

                    int leftVal = arr[left];
                    int rightVal = arr[right];

                    int leftCount = 0;
                    int rightCount = 0;

                    while (left <= right && arr[left] == leftVal) {
                        leftCount++;
                        left++;
                    }

                    while (right >= left && arr[right] == rightVal) {
                        rightCount++;
                        right--;
                    }

                    count += leftCount * rightCount;
                }
                else if (sum < target) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }

        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna