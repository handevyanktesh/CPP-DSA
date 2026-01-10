#include<iostream>
using namespace std;

int main()
    {   int n;
        cout<<"Number of rows: ";
        cin>>n;

        int k=1;
        int a=1;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <=i; j++)
            {
                cout<<k<<" ";
                k++;
                a+=2;
            }
            
            cout<<endl;
        }
        
    }