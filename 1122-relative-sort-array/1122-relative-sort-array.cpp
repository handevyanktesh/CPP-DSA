class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        vector<int>ans;
        map<int,int>mp;

        for(int num:arr1){
            mp[num]++;
        }

        for(int i=0; i<arr2.size();i++){
            while(mp[arr2[i]]>0){
                    ans.push_back(arr2[i]);
                    mp[arr2[i]]--; 
                }  
            }
        
        
        for(auto x:mp){
            while(x.second>0){
                ans.push_back(x.first);
                x.second--;
            }
        }
        return ans;
    }
};