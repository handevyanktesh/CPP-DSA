class Solution {
public:
    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string word, ans;
        string vowels = "aeiouAEIOU";
        int index = 1;

        while (ss >> word) {
            // If word starts with consonant
            if (vowels.find(word[0]) == string::npos) {
                word += word[0];
                word.erase(word.begin());
            }

            // Add "ma" + number of 'a's
            word += "ma";
            word += string(index, 'a');

            if (!ans.empty())
                ans += " ";

            ans += word;
            index++;
        }

        return ans;
    }
};