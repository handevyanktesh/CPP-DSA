class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = s.size() - 1;
        int j = t.size() - 1;

        while (i >= 0 || j >= 0) {
            int skip = 0;

            while (i >= 0) {
                if (s[i] == '#') {
                    skip++;
                    i--;
                }
                else if (skip > 0) {
                    skip--;
                    i--;
                }
                else break;
            }

            skip = 0;

            while (j >= 0) {
                if (t[j] == '#') {
                    skip++;
                    j--;
                }
                else if (skip > 0) {
                    skip--;
                    j--;
                }
                else break;
            }

            // One string has a character, other doesn't
            if (i < 0 || j < 0)
                return i == j;

            // Compare actual remaining characters
            if (s[i] != t[j])
                return false;

            i--;
            j--;
        }

        return true;
    }
};