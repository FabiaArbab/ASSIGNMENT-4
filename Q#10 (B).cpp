#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cout << "How many integers would you like to enter? ";
    cin >> N;

    vector<int> numbers;

    cout << "Please enter " << N << " integers:" << endl;
    for (int i = 0; i < N; i++) {
        int temp;
        cout << "Element " << i + 1 << ": ";
        cin >> temp;

        numbers.push_back(temp);
    }


    cout << "You entered: "<<endl;
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}