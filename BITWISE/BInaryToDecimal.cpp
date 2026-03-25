#include <iostream>
using namespace std;

// int Binary_to_Descimal(string &binary){
//     int res = 0;
//     int n = binary.size();
//     for(int i=n-1; i>=0;i--){
//         char ch = binary[i];
//         int num = ch - '0';
//         res = res + num*(1<<(n-i - 1));
//     }
//     return res;}

    //Method - 2
    int Binary_to_Descimal(string &x) {
    int len = x.length();
    int p2 = 1;   // power of 2
    int num = 0;

    for(int i = len - 1; i >= 0; i--) {
        if(x[i] == '1') {
            num = num + p2;
        }
        p2 = p2 * 2;
    }

    return num;
    }


int main(){
        string str = "1101";
        cout<<Binary_to_Descimal(str);
        return 0;
}