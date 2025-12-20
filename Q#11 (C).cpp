#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool hasDuplicates(const vector<int>& vec) {
    set<int> uniqueElements(vec.begin(), vec.end());
    return uniqueElements.size() != vec.size();
}

int main() {
    vector<int> numbers = {1, 5, 3, 4, 2, 1}; // '1' is a duplicate

    if (hasDuplicates(numbers)) {
        cout << "Duplicates found!" << endl;
    } else {
        cout << "No duplicates found." << endl;
    }

    return 0;
}