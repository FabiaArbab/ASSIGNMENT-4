#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};


    cout << "Traditional for loop:" << endl;
    for (size_t i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;


    cout << "Range-based for loop:" << endl;
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}