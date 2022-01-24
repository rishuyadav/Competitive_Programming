class Solution {
public:
 int countKDifference(vector<int>& A, int k) {
        int N = A.size(), ans = 0;
        for (int i = 0; i < N; ++i) {
            for (int j = i + 1; j < N; ++j) {
                ans += abs(A[i] - A[j]) == k;
            }
        }
        return ans;
    }
};