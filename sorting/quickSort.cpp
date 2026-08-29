#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr, int st, int end) {
    int i = st-1;
    int pivot = arr[end];
    for(int j=st; j<end; j++) {
        if(arr[j]<=pivot) {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[end]);
    return i;
}

void quickSort(vector<int>& arr, int st, int end) {
    if(st<end) {
        int pI = partition(arr,st,end);
        quickSort(arr,st,pI-1);
        quickSort(arr,pI+1,end);
    }
}

void printArr(vector<int>& arr) {
   for(int val : arr) {
    cout << val << " ";
   }
    cout << endl;
}

int main() {
    vector<int> arr = {5,4,2,1,3};
    quickSort(arr,0,arr.size()-1);
    printArr(arr);
    return 0;
}