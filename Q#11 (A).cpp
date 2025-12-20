#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Original vector: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    numbers.erase(remove_if(numbers.begin(), numbers.end(), [](int n) {
        return n % 2 == 0;
    }), numbers.end());

    cout << "After removing evens: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    return 0;
}