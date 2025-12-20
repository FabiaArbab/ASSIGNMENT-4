#include <iostream>
using namespace std;

const int MAX = 20;

class CrosswordValidator {
    char grid[MAX][MAX];
    int rows, cols;

    char longestWord[MAX + 1];
    int maxLen;

public:
    CrosswordValidator() : rows(0), cols(0), maxLen(0) {
        longestWord[0] = '\0';
    }

    void inputGrid() {
        cout << "Enter number of rows and columns: ";
        cin >> rows >> cols;

        cout << "Enter the grid row by row (use '.' for black squares):" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> grid[i][j];
            }
        }
    }

      bool isLetter(char c) {
        return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    }


    void updateLongest(char current[], int length) {
        if (length > maxLen) {
            maxLen = length;
            for (int i = 0; i < length; i++) {
                longestWord[i] = current[i];
            }
            longestWord[length] = '\0';
        }
    }

    void validate() {
        int horizontalCount = 0;
        int verticalCount = 0;


        for (int i = 0; i < rows; i++) {
            int currentLen = 0;
            char tempWord[MAX];

            for (int j = 0; j <= cols; j++) {
                   if (j < cols && isLetter(grid[i][j])) {
                    tempWord[currentLen] = grid[i][j];
                    currentLen++;
                } else {

                    if (currentLen >= 3) {
                        horizontalCount++;
                        updateLongest(tempWord, currentLen);
                    }
                    currentLen = 0;
                }
            }
        }

               for (int j = 0; j < cols; j++) {
            int currentLen = 0;
            char tempWord[MAX];

            for (int i = 0; i <= rows; i++) {
                if (i < rows && isLetter(grid[i][j])) {
                    tempWord[currentLen] = grid[i][j];
                    currentLen++;
                } else {
                    if (currentLen >= 3) {
                        verticalCount++;
                        updateLongest(tempWord, currentLen);
                    }
                    currentLen = 0;
                }
            }
        }
        cout<<endl;


        cout << "--- Validation Results ---" << endl;
        cout << "Horizontal words: " << horizontalCount << endl;
        cout << "Vertical words:   " << verticalCount << endl;
        cout << "Longest word:     " << (maxLen > 0 ? longestWord : "None") << endl;
    }
};

int main() {
    CrosswordValidator validator;
    validator.inputGrid();
    validator.validate();
    return 0;
}