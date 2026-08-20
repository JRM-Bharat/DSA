class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int best = nums[0];
        int worst = nums[0];
        int ans = nums[0];
        int sum=nums[0];
        int minAns=nums[0];

        for (int i = 1; i < n; i++) {
            int a = nums[i] + best;
            int b = nums[i];
            int c = nums[i] + worst;
            best = max(a, max(b, c));
            worst = min(a, min(b, c));
            ans = max(best, ans);
            minAns = min(minAns, worst);
            sum += nums[i];
        }

        if (ans < 0)
            return ans;
        return max(ans, sum - minAns);
    }
};