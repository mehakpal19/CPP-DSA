#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> v, int tar, int st, int end) {
    if(st<=end) {
        int mid = (st+end)/2;
        if(v[mid]==tar)
        return mid;
        else if(v[mid]<tar)
        return binarySearch(v,tar,mid+1,end);
        else
        return binarySearch(v,tar,st,mid-1);
    }
    return -1;
}
int main() {
     vector<int> v = {1,2,3,4,5};
    cout << binarySearch(v,10,0,v.size()-1);
    return 0;
}
