
class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        const long long MOD = 1e9 + 7;

        // Step 1: Count occurrences of each bit
        vector<int> bits(31, 0);

        for (int x : nums) {
            for (int b = 0; b < 31; b++) {
                if (x & (1 << b)) {
                    bits[b]++;
                }
            }
        }

        long long ans = 0;

        // Step 2: Build k numbers greedily
        for (int i = 0; i < k; i++) {
            long long num = 0;

            for (int b = 0; b < 31; b++) {
                if (bits[b] > 0) {
                    num |= (1LL << b);
                    bits[b]--;
                }
            }

            // Step 3: Add the square
            ans = (ans + num * num) % MOD;
        }

        return ans;
    }
};
