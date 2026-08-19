class Solution {
public:
    int strStr(string haystack, string needle) {

        int n = haystack.size();
        int m = needle.size();

        if (m == 0)
            return 0;

        // Step 1: Create LPS array
        vector<int> lps(m, 0);

        int i = 1;
        int len = 0;

        while (i < m) {

            if (needle[i] == needle[len]) {
                len++;
                lps[i] = len;
                i++;
            }

            else {
                if (len != 0) {
                    len = lps[len - 1];
                }

                else {
                    lps[i] = 0;
                    i++;
                }
            }
        }

        // Step 2: KMP search
        i = 0;
        int j = 0;

        while (i < n) {

            if (haystack[i] == needle[j]) {
                i++;
                j++;

                if (j == m) {
                    return i - j;
                }
            }

            else {
                if (j != 0) {
                    j = lps[j - 1];
                }

                else {
                    i++;
                }
            }
        }

        return -1;
    }
};