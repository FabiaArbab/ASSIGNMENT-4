#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Employee {
    string name;
    int age;
    vector<string> skills;
};

int main() {
    int numEmployees;

    cout << "Enter the number of employees: ";
    cin >> numEmployees;


    vector<Employee> directory;

    for (int i = 0; i < numEmployees; i++) {
        Employee temp;
        int numSkills;

        cout << "\n--- Employee #" << i + 1 << " ---" << endl;
        cout << "Name: ";
        cin.ignore();
        getline(cin, temp.name);

        cout << "Age: ";
        cin >> temp.age;

        cout << "How many skills does this employee have? ";
        cin >> numSkills;
        cin.ignore();

        for (int j = 0; j < numSkills; j++) {
            string skill;
            cout << "  Enter skill " << j + 1 << ": ";
            getline(cin, skill);
            temp.skills.push_back(skill);
        }

        directory.push_back(temp);
    }

    cout << "==============================="<<endl;
    cout << "      EMPLOYEE DIRECTORY       "<<endl;
    cout << "==============================="<<endl;

    for (const auto& emp : directory) {
        cout << "Name: " << emp.name << " (Age: " << emp.age << ")" << endl;
        cout << "Skills: ";
        for (size_t k = 0; k < emp.skills.size(); k++) {
            cout << emp.skills[k] << (k == emp.skills.size() - 1 ? "" : ", ") << endl;
        }
        cout << "-------------------------------" << endl;
    }

    return 0;
}