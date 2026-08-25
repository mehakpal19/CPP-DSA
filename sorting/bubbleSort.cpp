#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    int isSorted = false;
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                isSorted = true;
            }
        }
        if(!isSorted)
        return ;
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
    bubbleSort(arr,5);
    printArr(arr,5);
    return 0;
}