#include <iostream>
using namespace std;
int partition(int arr[],int si, int ei){
    int pivotELement = arr[si];
    int count = 0;
    for(int i = si+1; i<=ei; i++){
        if(arr[i]<pivotELement) count++;
    }
    int pivotIdx = count + si;
    swap(arr[si],arr[pivotIdx]);
    int i = si;
    int j = ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<= pivotELement) i++;
        if(arr[j]>pivotELement) j--;
        else if (arr[i]>pivotELement && arr[j]<pivotELement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }  
    }return pivotIdx;
}

int quickselect(int arr[],int si,int ei,int k){
    
    int pi = partition(arr,si,ei);
    if (pi+1 == k) return arr[pi];
    else if (pi+1 < k) return quickselect(arr,pi+1,ei,k);
    else return quickselect(arr,si,pi-1,k);
}
int main(){
    int arr[] = {5,1,3,2,4,6,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    int k = 3;
    int target = n - k +1;
    cout<<quickselect(arr,0,n-1,target);
}


