#include<iostream>
using namespace std;
int main() {
    int n,m;
    cout<<"enter number of row of matrix: ";
    cin>>n;
    cout<<"enter number of column of matrix: ";
    cin>>m;
    int mat[n][m];

    cout<<"enter matrix element: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>mat[i][j];
        }
    }
    cout<<"--SNAKE PATTERN OUTPUT--"<<endl;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                cout<<mat[i][j]<<" ";
            }
        }
        else {
            for (int j = n - 1; j >=0; j--) {
                cout<<mat[i][j]<<" ";
            }
        }
    }
    return 0;
}