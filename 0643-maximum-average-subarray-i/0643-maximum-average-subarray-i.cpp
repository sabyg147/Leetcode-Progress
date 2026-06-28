class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int n = nums.size();
        int low = 0;
        int high = k - 1;
        int sum = 0;

        // First window
        for (int i = low; i <= high; i++) {
            sum += nums[i];
        }

        int maxSum = sum;

        while (high < n - 1) {

            low++;
            high++;

            sum -= nums[low - 1];
            sum += nums[high];

            maxSum = max(maxSum, sum);
        }

        return (double)maxSum / k;
    }
};