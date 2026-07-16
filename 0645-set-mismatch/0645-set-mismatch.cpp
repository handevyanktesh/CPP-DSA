class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(int x:nums){
            mp[x]++;
        }

        int ans = 0;
        for(auto x:mp){
            if(x.second>1){ 
                ans = x.first;
                break;
            }
        }

        int missing = 0;
        for(int i = 1; i <= nums.size(); i++){
            if(mp.find(i) == mp.end()){
                missing = i;
                break;
            }
        }
        return {ans, missing};
    }
};