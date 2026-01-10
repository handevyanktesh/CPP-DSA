#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"Enter  rows :";
    cin>>n;

        //FOR PLUS PATTERN

    int mid = n/2+1;

    for (int  i = 1; i <=n; i++)
    {
       for (int j = 1; j <= n; j++)
       {
            if(i==mid || j==mid){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

       }
       cout<<endl;
       
    }


        //for X PATTERN 

    //  for(int i=1; i <=n; i++){
    //     for(int j=1; j<=n; j++){
    //         if(i==j || j+i==n+1){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    //  }
} 

