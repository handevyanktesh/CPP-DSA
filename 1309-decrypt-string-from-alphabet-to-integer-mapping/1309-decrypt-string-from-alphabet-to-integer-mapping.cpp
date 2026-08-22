class Solution {
public:
    string freqAlphabets(string s) {

        int i = 0;
        string ans = "";

        while(i<s.size()){
            int digihash = 0;
            if(i + 2 < s.size() && s[i+2] == '#'){
                digihash = (s[i] - '0') * 10 + (s[i+1] - '0');
                char ch = 'a' + (digihash-1);
                ans += ch;
                i += 3;
            }
            else{
                ans += 'a' + (s[i] - '1');
                i++;
            }
        }
       return ans; 
    }
};