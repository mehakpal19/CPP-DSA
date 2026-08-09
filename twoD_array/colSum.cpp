#include<iostream>
#include<climits>
using namespace std;

int maxColSum(int mat[][3], int r, int c) {
    int sum, maxSum=INT_MIN;
    for(int i=0; i<r; i++) {
        sum=0;
        for(int j=0; j<c; j++) {
            sum += mat[j][i];
        }
        maxSum = max(maxSum,sum);
    }
    return sum;
}


int main() {
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
     cout << maxColSum(mat,3,3);
    return 0;
}