#include <iostream>
using namespace std;

int Binary_to_Descimal(string &binary){
    int res = 0;
    int n = binary.size();
    for(int i=n-1; i>=0;i--){
        char ch = binary[i];
        int num = ch - '0';
        res = res + num*(1<<(n-i - 1));
    }
    return res;
}
int main(){
        string str = "1101";
        cout<<Binary_to_Descimal(str);
        return 0;
}