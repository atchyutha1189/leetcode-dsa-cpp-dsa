class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> need;

        for (char ch : t) {
            need[ch]++;
        }

        int left = 0;
        int count = 0;

        int minLen = INT_MAX;
        int startIndex = -1;

        for (int right = 0; right < s.length(); right++) {

            char ch = s[right];

            if (need[ch] > 0) {
                count++;
            }

            need[ch]--;

            while (count == t.length()) {

                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    startIndex = left;
                }

                char leftChar = s[left];

                need[leftChar]++;

                if (need[leftChar] > 0) {
                    count--;
                }

                left++;
            }
        }

        if (startIndex == -1) {
            return "";
        }

        return s.substr(startIndex, minLen);
    }
};