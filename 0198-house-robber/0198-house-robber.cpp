class Solution {
public:
    int rob(vector<int>& nums) {
        
        int prevRob = 0;
        int maxRob = 0;

        for(int p: nums){
            int temp = max(maxRob,(p+prevRob));
            prevRob = maxRob;
            maxRob = temp;
        }
        return maxRob;
    }
};