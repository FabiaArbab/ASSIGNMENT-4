#include <iostream>
#include <vector>

using namespace std;

int findMissingXOR(const vector<int>& v1, const vector<int>& v2) {
    int result = 0;


    for (int x : v1) {
        result ^= x;
    }


    for (int x : v2) {
        result ^= x;
    }

    return result;
}

int main() {
    vector<int> vec1 = {4, 1, 3, 2, 7};
    vector<int> vec2 = {1, 2, 4, 3};

    cout << "The missing element is: " << findMissingXOR(vec1, vec2) << endl;

    return 0;
}