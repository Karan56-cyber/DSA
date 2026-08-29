class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {

                bool duplicate = false;
                for (int k = i; k < j; k++) {
                    if (s[k] == s[j]) {
                        duplicate = true;
                        break;
                    }
                }

                if (duplicate)
                    break;

                ans = max(ans, j - i + 1);
            }
        }

        return ans;
    }
};