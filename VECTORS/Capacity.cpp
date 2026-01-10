#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(4); //size=1,capacity=2
    v.push_back(5); //size=2,capacity=2
    cout<<v.capacity()<<endl;
    v.push_back(3); //size=3,capacity=4
    v.push_back(1); //size=4,capacity=4
    cout<<v.capacity()<<endl;
    v.push_back(6); //size=5,capacity=8
    v.push_back(7); //size=6,capacity=8
    v.push_back(8); //size=7,capacity=8
    v.push_back(9); //size=8,capacity=8
    cout<<v.capacity()<<endl;
}