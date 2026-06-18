#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    s.erase(4);
    int target = 3;
    if(s.find(target)!= s.end()){
        cout<<"Exist";
        cout<<endl;
    }
    else{
        cout<<"Does Not Exist";
        cout<<endl;
    }

    for(int ele:s){
        cout<<ele<<" ";
    }

}
