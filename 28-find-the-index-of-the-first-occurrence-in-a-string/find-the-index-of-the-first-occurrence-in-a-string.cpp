class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int j = 0; j < haystack.size(); j++) {
            int i = 0;
            int k = j;

            while (k < haystack.size() &&
                   i < needle.size() &&
                   haystack[k] == needle[i]) {
                k++;
                i++;
            }

            if (i == needle.size()) {
                return j;
            }
        }

        return -1;
    }
};