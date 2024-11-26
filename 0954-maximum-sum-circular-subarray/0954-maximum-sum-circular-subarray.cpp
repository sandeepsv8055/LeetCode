class Solution {
public:
    int maxSubarraySumCircular(vector<int> &arr) {
    int n = arr.size();
    int maxSum = INT_MIN;
    int minSum = INT_MAX;
    int maxi = 0, mini = 0, totalSum = 0;

    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
        // Kadane's for max subarray sum
        maxi += arr[i];
        maxSum = max(maxSum, maxi);
        if (maxi < 0) maxi = 0;

        // Kadane's for min subarray sum
        mini += arr[i];
        minSum = min(minSum, mini);
        if (mini > 0) mini = 0;
    }

    // If all elements are negative, maxSum will be the largest element
    if (maxSum < 0) return maxSum;

    // Maximum of non-circular and circular sums
    return max(maxSum, totalSum - minSum);
    }

};