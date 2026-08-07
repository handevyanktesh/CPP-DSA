class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int i = 0;
        int j = 1;
        int mxp = 0;

        while(j<prices.size()){
            int cp = prices[j] - prices[i];
            if(prices[i]<prices[j]){
                mxp = max(cp, mxp);
            }
            else{
                i = j;
            }
            j++;
        }
        return mxp;
    }
};