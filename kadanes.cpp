class Solution {
public:
    int maxSubArray(vector<int>& arr) {
    int n = arr.size();
  int maxSum = INT_MIN;
  int currSum = 0;

  for (int i = 0; i <= n - 1; i++) {
    currSum += arr[i];

    if (currSum > maxSum) {
      maxSum = currSum;
    }

    if (currSum < 0) {
      currSum = 0;
    }
  }

  return maxSum;

        
    }
};