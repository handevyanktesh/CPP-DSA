class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        if(nums.size()==1) return;
        k = k % nums.size();

        if(k == 0) return;
        
        int n = nums.size() - 1;
        reverse(nums.begin(),nums.end());
        if(nums.size()==2) return;

        int i = 0, j = k - 1;
        while(i<=j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        
        int x = n;
        for(int i=k; i<=x; i++){
            swap(nums[i],nums[x]);
            x--;
        }

        return ;
    }
};