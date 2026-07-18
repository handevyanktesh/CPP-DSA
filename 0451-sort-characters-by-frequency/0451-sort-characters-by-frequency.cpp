class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char,int>mp;
        for(auto ch:s){
            mp[ch]++;
        }

        priority_queue<pair<int,char>>pq;
        for(auto x:mp){
            pq.push({x.second,x.first});
        }

        string ans ="";
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();

            int freq = it.first;
            char ch = it.second;

            while(freq>0){
                freq--;
                ans += ch;
            }
        }
        return ans;
    }
};