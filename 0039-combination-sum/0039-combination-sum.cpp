class Solution {
public:
    void combSum(vector<int>& candidates,int i, vector<vector<int>>&ans, vector<int>&combin, int tar){
        if(i == candidates.size() || tar<0 ) return;
        if(tar == 0){
            ans.push_back(combin);
            return;
        }

        // Include (can reuse)
        combin.push_back(candidates[i]);
        combSum(candidates, i, ans, combin, tar - candidates[i]);
        combin.pop_back();

        // Exclude
        combSum(candidates, i + 1, ans, combin, tar);            

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>>ans;
        vector<int>combin;

        combSum(candidates,0,ans,combin,target);

        return ans;
    }
};