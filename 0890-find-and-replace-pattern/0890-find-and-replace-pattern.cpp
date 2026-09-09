class Solution {
public:
    bool match(string word, string pattern) {
        map<char, char> mp1; 
        map<char, char> mp2; 
        for (int i = 0; i < word.size(); i++) {

            if (mp1.count(word[i]) && mp1[word[i]] != pattern[i])
                return false;

            if (mp2.count(pattern[i]) && mp2[pattern[i]] != word[i])
                return false;

            mp1[word[i]] = pattern[i];
            mp2[pattern[i]] = word[i];
        }

        return true;
    }

    vector<string> findAndReplacePattern(
        vector<string>& words, string pattern) {

        vector<string> ans;

        for (string word : words) {
            if (match(word, pattern))
                ans.push_back(word);
        }

        return ans;
    }
};