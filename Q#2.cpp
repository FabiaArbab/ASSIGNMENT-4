#include<iostream>
using namespace std;

void inputsales(int sales[5][7]) {
    for (int i = 0; i < 5; i++) {
        cout<<"enter sales for product"<<i + 1<<endl;
        for (int j = 0; j < 7; j++) {
            cout<<" Day  "<<j + 1 << " : ";
            cin>>sales[i][j];
        }
    }
}

void calculateRevenue(int sales[5][7],int maxsaled[5]) {
    for (int i = 0; i < 5; i++) {
        maxsaled[i] = 0;
        for (int j = 0; j < 7; j++) {
            maxsaled[i] += sales[i][j];
        }
    }
}

int findmaxproduct(int maxsaled[5]) {
    int max = 0;
    for (int i = 0; i < 5; i++) {
        if (maxsaled[i] > maxsaled[max]) {
            max = i;
        }
    }
    return max;
}

int findBestDay(int sales[5][7]) {
    int daySum[7] = {0};

    for (int j = 0; j < 7; j++) {
        for (int i = 0; i < 5; i++) {
            daySum[j] += sales[i][j];
        }
    }


    int bestDay = 0;
    for (int j = 1; j < 7; j++) {
        if (daySum[j] > daySum[bestDay]) {
            bestDay = j;
        }
    }
    return bestDay;
}

int main() {
    int sales[5][7];
    int maxsaled[5];

    inputsales(sales);
    calculateRevenue(sales, maxsaled);

    cout << "--- Weekly Sales ---: "<<endl;
    for (int i = 0; i < 5; i++) {
        cout << "Product " << i + 1 << ": " << maxsaled[i] << endl;
    }

    cout << "Max Revenue Product: Product "
         << findmaxproduct(maxsaled) + 1 << endl;

    cout << "Best Sales Day: Day "
         << findBestDay(sales) + 1 << endl;

    return 0;
}