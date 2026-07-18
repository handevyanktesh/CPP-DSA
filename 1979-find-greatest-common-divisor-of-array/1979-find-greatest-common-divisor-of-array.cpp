class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mx = INT_MIN;
        int mn = INT_MAX;

        for (int x : nums) {
            if (x < mn)
                mn = x;

            if (x > mx)
                mx = x;
        }

        return gcd(mn, mx);
    }
};