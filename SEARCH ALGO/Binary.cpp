#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>&nums, int target){
    int lo = 0;
    int hi = nums.size()-1;
    while(lo<=hi){
        int mid = (lo +hi)/2;
        if(nums[mid]==target) return mid;
        else if (nums[mid]<target) lo = mid + 1;
        else hi = mid -1;
    }
    return -1;
}
int main(){
    vector<int> v;
    int target = 20;
    v.push_back(3);
    v.push_back(6);
    v.push_back(9);
    v.push_back(15);
    v.push_back(18);
    v.push_back(12);

    
    int index = search(v, target);
    if(index != -1)
        cout << "Target found at index: " << index << endl;
    else
        cout << "Target not found: -1" << endl;

    return 0;

}