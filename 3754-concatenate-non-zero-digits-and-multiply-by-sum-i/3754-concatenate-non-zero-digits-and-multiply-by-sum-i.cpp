class Solution {
public:
    long long sumAndMultiply(int n) {

        string s = to_string(n);
        long long total = 0;
        string num = "";

        for(char ch:s){
            long long x = ch - '0';
            if(x>0){
                total += x;
                num += ch;
            }
            else continue;
        }
        if(num.empty())
        return 0;
        long long ans = total * stoi(num);
        return ans;
    }
};