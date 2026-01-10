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

int x;
cout<<"Enter the x:";
cin>>x;

int count=0;
for(int i=0; i<n; i++){
    if(Arr[i]>x) count++;
}cout<<count<<" numbers are grter than x;";
}