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

        int idx = i+1;
        while(idx<nums.size() && nums[idx]==nums[idx-1]) idx++;
        getAllsub(nums,ans,idx,allsub);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<vector<int>>allsub;
        vector<int>ans;

        getAllsub(nums,ans,0,allsub);
        return allsub;
    }
};