class Solution {
public:

    void getAllsub(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allsub){
        if(i==nums.size()){
            allsub.push_back({ans});
            return;
        }
        ans.push_back(nums[i]);
        getAllsub(nums,ans,i+1,allsub);

        ans.pop_back();
        getAllsub(nums,ans,i+1,allsub);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>allsub;
        vector<int>ans;
        getAllsub(nums,ans,0,allsub);
        return allsub;
    }
};