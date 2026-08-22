class Solution {
public:
    bool checkDivisibility(int n) {

        int add = 0;
        int product = 1;
        int og = n;
        
        while(n > 0){
            int a = n % 10;
            add +=  a;
            product *= a;
            n /= 10;
        }
        int total = add + product ;
        if (og % total == 0 ) return true;

        return false;
    }
};