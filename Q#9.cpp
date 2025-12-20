#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Student {
    string name;
    string id;
};

struct Course {
    string courseName;
    string courseCode;
    vector<Student> enrolledStudents;
};

int main() {
    int numCourses;
    cout << "Enter number of courses: ";
    cin >> numCourses;


    vector<Course> university;

    for (int i = 0; i < numCourses; i++) {
        Course c;
        int studentCount;

        cout << "Course #" << i + 1 << " Name: "<<endl;
        cin.ignore();
        getline(cin, c.courseName);
        cout << "Course Code: ";
        getline(cin, c.courseCode);

        cout << "How many students are enrolled? ";
        cin >> studentCount;
        cin.ignore();

        for (int j = 0; j < studentCount; j++) {
            Student s;
            cout << "  Student " << j + 1 << " Name: ";
            getline(cin, s.name);
            cout << "  Student " << j + 1 << " ID: ";
            getline(cin, s.id);
            c.enrolledStudents.push_back(s);
        }
        university.push_back(c);
    }


    cout << "--- Enrollment Report ---"<<endl;
    for (const auto& crs : university) {
        cout << "Course: " << crs.courseName << " (" << crs.courseCode << ")"<<endl;
        cout << "Students: "<<endl;
        for (const auto& st : crs.enrolledStudents) {
            cout << " - " << st.name << " (ID: " << st.id << ")"<<endl;
        }
        cout << endl;
    }

    return 0;
}