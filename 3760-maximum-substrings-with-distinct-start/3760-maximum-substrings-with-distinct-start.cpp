class Solution {
public:
    int maxDistinct(string s) {
        
        unordered_set<char>a;
        for(char ch:s){
            a.insert(ch);
        }
        return a.size();
    }
};