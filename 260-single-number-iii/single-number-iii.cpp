class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xr = 0;

        for (int x : nums) {
            xr ^= x;
        }

        unsigned int bit = (unsigned int)xr & -(unsigned int)xr;

        int a = 0, b = 0;

        for (int x : nums) {
            if ((unsigned int)x & bit)
                a ^= x;
            else
                b ^= x;
        }

        return {a, b};
    }
};