#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of vector:";
    cin>>n;

    vector<int>v;
    cout<<"Enter vectors element:";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(i);
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<endl;
    }
}
