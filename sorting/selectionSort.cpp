#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int smallIdx = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j]<arr[smallIdx])
            smallIdx = j;
        }
        swap(arr[smallIdx],arr[i]);
    }
}

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {5,4,2,1,3};
    selectionSort(arr,5);
    printArr(arr,5);
    return 0;
}