#include <iostream>
#include<algorithm>
using namespace std;

string Descimal_to_Binary(int num){
    //Method - 2
    // if(num==0) return "0";
    // string res = "";
    // while(num>0){
    //     res = char((num%2)+'0')+ res;
    //     num /= 2;
    // }
    // return res;
    string res = "";
    while(num != 0){
        if(num%2==1) res += "1";
        else res += "0";
        num = num/2;
    }
    reverse(res.begin(), res.end());
    return res;
}
int main(){
        int number = 13;
        cout<<Descimal_to_Binary(number);
        return 0;
}