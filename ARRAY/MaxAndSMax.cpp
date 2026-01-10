#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter Size of Array:";
cin>>n;

int Arr[n];
cout<<"Enter Elements:";
for(int i=0; i<n; i++){
    cin>>Arr[i];
}
int Max=Arr[0];
cout<<"Array: ";
for(int i=0; i<n; i++){
    if(Max<Arr[i])    Max=Arr[i];
    cout<<Arr[i]<<" ";
}
cout<<endl;
cout<<"Maximum value in above Array is:"<<Max;

int Smax=Arr[0];
for(int i=0; i<n; i++){
    if((Arr[i]!=Max) && Smax<Arr[i]) Smax=Arr[i];
}
cout<<endl;
cout<<"The second max value is:"<<Smax;
}