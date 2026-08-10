class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) return false;
        
        unordered_map<char,int>mp;
        for(char ch:s){
            mp[ch]++;
        }

        for(auto x:t){
            if(mp.find(x) != mp.end()) {
                if(mp[x] == 1) {
                    mp.erase(x);
                }
                else{
                    mp[x]--;
                }
            }
        }
        return mp.size()==0;
    }
};