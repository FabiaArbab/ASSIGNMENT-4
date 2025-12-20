#include<iostream>
using namespace std;
int main() {

    int n;
    cout<<"enter order of matrix (n): ";
    cin>>n;
    int mat[n][n];
    int arr [n*n];
    int k = 0;

    cout<<"enter matrix element: "<<endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin>>mat[i][j];
            arr[k++] = mat[i][j];
        }
    }


 int k=0;
    for (int i = 0; i <n; i++) {
        for (int j = 0; j < n; j++) {
            cout<<mat[i][j]<<" ";
        }
    }
    cout<<"--SORTED MATRIX--"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}