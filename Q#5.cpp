#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;

    int** matrix = new int*[row];
    for(int i = 0; i < row; ++i)
        matrix[i] = new int[col];

    cout << "Enter elements of the matrix: "<<endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }


    int** rotated = new int*[col];
    for(int i = 0; i < col; ++i)
        rotated[i] = new int[row];


    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            rotated[j][row - 1 - i] = matrix[i][j];
        }
    }

    cout << "Rotated matrix (90 degrees clockwise): "<<endl;
    for(int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < row; i++) delete[] matrix[i];
    delete[] matrix;
    for(int i = 0; i < col; i++) delete[] rotated[i];
    delete[] rotated;
    return 0;
}