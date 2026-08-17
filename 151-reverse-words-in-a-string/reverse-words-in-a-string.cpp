class Solution {
public:
    string reverseWords(string s) {

        // Step 1: Remove leading spaces
        int left = 0;

        while (left < s.size() && s[left] == ' ') {
            left++;
        }

        // Step 2: Remove trailing spaces
        int right = s.size() - 1;

        while (right >= 0 && s[right] == ' ') {
            right--;
        }

        // Take only the useful part
        s = s.substr(left, right - left + 1);

        // Step 3: Remove extra spaces
        string temp;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] != ' ') {
                temp += s[i];
            }
            else if (!temp.empty() && temp.back() != ' ') {
                temp += ' ';
            }
        }

        // Step 4: Reverse entire string
        reverse(temp.begin(), temp.end());

        // Step 5: Reverse every word
        int start = 0;

        for (int i = 0; i <= temp.size(); i++) {

            if (i == temp.size() || temp[i] == ' ') {

                int l = start;
                int r = i - 1;

                while (l < r) {
                    swap(temp[l], temp[r]);
                    l++;
                    r--;
                }

                start = i + 1;
            }
        }

        return temp;
    }
};