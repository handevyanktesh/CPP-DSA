class Solution {
public:

    int gcd(int a, int b) {
        if (b == 0)return a;
        return gcd(b, a % b);
    }

    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        int mx = nums[0];
        vector<int>prefixGcd(n);
        prefixGcd[0] = nums[0];

        for(int i=1; i<n; i++){
            mx = max(nums[i],mx);
            prefixGcd[i] = gcd(nums[i], mx);
        }
        sort(prefixGcd.begin(),prefixGcd.end());

        int i = 0, j = prefixGcd.size()-1;
        long long total = 0;
        while(i<j){
            total += gcd(prefixGcd[i],prefixGcd[j]);
            i++;
            j--;
        }
        return total;
    }
};