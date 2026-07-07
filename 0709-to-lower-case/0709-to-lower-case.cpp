class Solution {
public:
    string toLowerCase(string s) {

        string ans = "";

        for (char ch : s) {
            if (ch >= 'A' && ch <= 'Z')
                ans += ch + 32;
            else
                ans += ch;
        }

        return ans;
    }
};