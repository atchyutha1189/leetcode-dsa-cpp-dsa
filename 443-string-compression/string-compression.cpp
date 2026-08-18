class Solution {
public:
    int compress(vector<char>& chars) {

        int write = 0;
        int count = 1;

        for (int i = 0; i < chars.size(); i++) {

            if (i + 1 < chars.size() && chars[i] == chars[i + 1]) {
                count++;
            }
            else {

                chars[write++] = chars[i];

                if (count > 1) {

                    string num = to_string(count);

                    for (char c : num) {
                        chars[write++] = c;
                    }
                }

                count = 1;
            }
        }

        return write;
    }
};