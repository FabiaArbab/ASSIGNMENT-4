#include <iostream>
#include <vector>
using namespace std;


void reverseVector(vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n / 2; i++) {
        swap(vec[i], vec[n - 1 - i]);
    }
}

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Original vector: ";
    for (int x : numbers) cout << x << " ";

    // Call the function
    reverseVector(numbers);

    cout << "\nReversed vector: ";
    for (int x : numbers) cout << x << " ";
    cout << endl;

    return 0;
}