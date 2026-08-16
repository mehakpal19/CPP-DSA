#include<iostream>
using namespace std;
pair<int,int> linearSearch(int mat[][3], int r, int c, int key) {
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            if(mat[i][j]==key)
            return {i,j};
        }
    }
    return {-1,-1};
}

int main() {
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    pair<int,int> p = linearSearch(mat,3,3,8);
    cout << p.first << " " << p.second;
    return 0;
}