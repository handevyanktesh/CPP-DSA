class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        unordered_map<char,int>mp;
        for(auto ch:stones){
            mp[ch]++;
        }

        int count = 0;
        for(char x:jewels){
            if(mp.find(x)!=mp.end()){
                while(mp[x]--){
                    count++;
                }
            }
        }
        return count;
    }
};