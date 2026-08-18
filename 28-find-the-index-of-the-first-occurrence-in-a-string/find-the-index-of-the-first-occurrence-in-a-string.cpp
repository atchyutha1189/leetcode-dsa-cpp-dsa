class Solution {
public:
    int strStr(string haystack, string needle) {

        for (int i = 0; i < haystack.size(); i++) {

            int j = 0;

            for (int k = i; k < haystack.size(); k++) {

                if (haystack[k] == needle[j]) {
                    j++;
                }
                else {
                    break;
                }

                if (j == needle.size()) {
                    return i;
                }
            }
        }

        return -1;
    }
};