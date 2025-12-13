#include <iostream>
using namespace std;


void displaySeats(int seats[10][10]) {
    cout << "Seat Layout (0 = Empty, 1 = Reserved)"<<endl;
    for (int i = 0; i < 10; i++) {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < 10; j++) {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
}

void reserveSeat(int seats[10][10]) {
    int row, col;
    cout << "Enter row (1-10): ";
    cin >> row;
    cout << "Enter seat (1-10): ";
    cin >> col;

    if (seats[row - 1][col - 1] == 0) {
        seats[row - 1][col - 1] = 1;
        cout << "--SEAT RESERVED SUCCESSFULLY--"<<endl;
    } else {
        cout << "--SEAT IS ALREADY RESERVED--"<<endl;
    }
}

void cancelSeat(int seats[10][10]) {
    int row, col;
    cout << "Enter row (1-10): ";
    cin >> row;
    cout << "Enter seat (1-10): ";
    cin >> col;

    if (seats[row - 1][col - 1] == 1) {
        seats[row - 1][col - 1] = 0;
        cout << "--SEAT CANCELLED SUCCESSFULLY--"<<endl;
    } else {
        cout << "--SEAT ALREADY EMPTY--"<<endl;
    }
}

void countRows(int seats[10][10]) {
    int full = 0, empty = 0, partial = 0;

    for (int i = 0; i < 10; i++) {
        int count = 0;
        for (int j = 0; j < 10; j++) {
            if (seats[i][j] == 1)
                count++;
        }

        if (count == 10)
            full++;
        else if (count == 0)
            empty++;
        else
            partial++;
    }

    cout << "FULLY OCCUPIED ROWS: " << full << endl;
    cout << "PARTIALLY OCCUPIED ROWS: " << partial << endl;
    cout << "EMPTY ROWS: " << empty << endl;
}


void menu() {
    cout << "--- BUS SEAT RESERVATION SYSTEM ---"<<endl;
    cout << "1. Display Seats"<<endl;
    cout << "2. Reserve a Seat"<<endl;
    cout << "3. Cancel a Seat"<<endl;
    cout << "4. Count Seat Rows"<<endl;
    cout << "5. Exit"<<endl;
    cout << "Enter your choice: ";
}

int main() {
    int seats[10][10] = {0};
    int choice;

    do {
        menu();
        cin >> choice;

        switch (choice) {
            case 1:
                displaySeats(seats);
                break;
            case 2:
                reserveSeat(seats);
                break;
            case 3:
                cancelSeat(seats);
                break;
            case 4:
                countRows(seats);
                break;
            case 5:
                cout << "Exiting program..."<<endl;
                break;
            default:
                cout << "Invalid choice!"<<endl;
        }
    } while (choice != 5);

    return 0;
}

