#include<iostream>
using namespace std;
int main() {
    int mat[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    int n = 4;

    for (int i=0;i<n;i++) {

        if (i % 2 == 0) {
            for (int j=0;j<n;j++) {
                cout<<mat[i][j]<<" ";
            }
        }
        else {
            for ( int j = n - 1; j >= 0; j--) {
                cout<<mat[i][j]<<" ";
            }
        }
    }
    return 0;
}
