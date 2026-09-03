class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mn = nums[0];
        int mx = nums[0];

        for (int x : nums) {
            mn = min(mn, x);
            mx = max(mx, x);
        }

        return max(0, mx - mn - 2 * k);
    }
};