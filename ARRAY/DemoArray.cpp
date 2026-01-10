#include <iostream>
using namespace std;
int main(){
    int arr[]={4,6,2,7,3};
    int* ptr= &arr[0];
    cout<<ptr<<endl;

    for(int i=0; i<5; i++){
        cout<<*ptr;
        ptr++;
    }
}