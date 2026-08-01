class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;

        // Find the first non-negative number
        int post = 0;
        while (post < n && nums[post] < 0) {
            post++;
        }

        int pre = post - 1;

        // Merge the negative and non-negative parts
        while (pre >= 0 && post < n) {
            if (abs(nums[pre]) <= abs(nums[post])) {
                result.push_back(nums[pre] * nums[pre]);
                pre--;
            } else {
                result.push_back(nums[post] * nums[post]);
                post++;
            }
        }

        // Remaining negative numbers
        while (pre >= 0) {
            result.push_back(nums[pre] * nums[pre]);
            pre--;
        }

        // Remaining non-negative numbers
        while (post < n) {
            result.push_back(nums[post] * nums[post]);
            post++;
        }

        return result;
    }
};