#include <iostream>
using namespace std;

int main()
{   int n;
    cout<<"No of lines :";
    cin>>n;
    int m=n-1;
    int nsp=1;

    for(int i = 1; i<=2*n-1; i++){
        cout<<"*";
    }
    cout<<endl;

    for(int i = 1; i <= m; i++ ){
         //Stars
        for(int j = 1; j<=m+1-i; j++){
            cout<<"*";
        }
        //Spaces
        for(int k = 1; k<=nsp; k++){
            cout<<" ";
        }nsp+=2;

        //Stars
        for(int j = 1; j<=m+1-i; j++){
            cout<<"*";
        }
        cout<<endl;
        }

}
        
        
    

        