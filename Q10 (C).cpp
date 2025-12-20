#include <iostream>
#include <vector>


using namespace std;

int main() {
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;

    if (N <= 0) {
        cout << "Please enter a positive number." << endl;
        return 1;
    }

    vector<int> numbers;
    cout << "Enter " << N << " integers:" << endl;
    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        numbers.push_back(temp);
    }


    int maxVal = numbers[0];
    int minVal = numbers[0];


    for (size_t i = 1; i < numbers.size(); i++) {
        if (numbers[i] > maxVal) {
            maxVal = numbers[i];
        }
        if (numbers[i] < minVal) {
            minVal = numbers[i];
        }
    }
cout<<endl;
    cout << "Results:" << endl;
    cout << "Largest element: " << maxVal << endl;
    cout << "Smallest element: " << minVal << endl;

    return 0;
}