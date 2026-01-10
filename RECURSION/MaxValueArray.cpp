#include<iostream>
using namespace std;

// void printMax(int arr[], int n , int idx, int max){
//     if (idx==n) {
//         cout<<max;
//         return ;
//     }

//     if(max<arr[idx]) max= arr[idx];
//     printMax(arr,n,idx+1,max);
// }

int MaxinArray(int arr[], int n , int idx){
    if (idx==n) return INT_MIN;
    return max(arr[idx], MaxinArray(arr,n,idx+1));
}


int main(){
    int arr[]={ 1, 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    //MaxinArray(arr,n,0);
    cout<< MaxinArray(arr,n,0);
}