class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int>mp;
        for(int n:nums1){
            mp[n]++;
        }

        vector<int>ans;

        for(int n:nums2){
            if(mp.find(n) != mp.end()){
                ans.push_back(n);
                mp.erase(n);
            }
        }
        return ans;
    }
};