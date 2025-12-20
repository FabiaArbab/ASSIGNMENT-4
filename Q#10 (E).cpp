#include <iostream>
#include <vector>

using namespace std;


int countOccurrences(const vector<int>& vec, int target) {
    int count = 0;
    for (int num : vec) {
        if (num == target) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> numbers = {10, 20, 30, 20, 40, 20, 50};
    int target;

    cout << "Vector contents: {10, 20, 30, 20, 40, 20, 50}" << endl;
    cout << "Enter the number you want to count: ";
    cin >> target;

    int total = countOccurrences(numbers, target);

    cout << "The number " << target << " appears " << total << " times." << endl;

    return 0;
}