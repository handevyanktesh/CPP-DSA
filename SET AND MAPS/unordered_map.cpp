#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,int>mp;
    mp[1] = 6;
    mp[2] = 7;
    mp[3] = 8;
    mp[4] = 9;
    mp[5] = 0;
    int target = 3;
    if(mp.find(target)!= mp.end()){
        cout<<"Exist";
        cout<<endl;
    }
    else{
        cout<<"Does Not Exist";
        cout<<endl;
    }

    for(auto ele:mp){
        cout<<ele.first<<" "<<ele.second;
        cout<<endl;
    }

}
