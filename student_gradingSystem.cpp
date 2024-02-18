#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    double grade;
};

int main() {
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    if (numStudents <= 0) {
        cout << "Invalid number of students. Exiting program." << endl;
        return 1;
    }

    vector<Student> students;

    for (int i = 0; i < numStudents; ++i) {
        Student student;
        cout << "Enter student #" << i + 1 << " name: ";
        cin >> student.name;
        cout << "Enter student #" << i + 1 << " grade: ";
        cin >> student.grade;

        students.push_back(student);
    }

    double sum = 0.0;
    for (const auto &student : students) {
        sum += student.grade;
    }
    double average = sum / numStudents;

    auto maxGrade = max_element(students.begin(), students.end(),[](const Student &a, const Student &b) 
    {
    return a.grade < b.grade;});

    auto minGrade = min_element(students.begin(), students.end(), [](const Student &a, const Student &b) {
    return a.grade < b.grade;
    });

    cout << "\nAverage grade: " << average << endl;
    cout << "Highest grade: " << maxGrade->grade << " (Student: " << maxGrade->name << ")" << endl;
    cout << "Lowest grade: " << minGrade->grade << " (Student: " << minGrade->name << ")" << endl;

    return 0;
}
