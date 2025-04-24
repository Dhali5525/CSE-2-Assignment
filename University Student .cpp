#include <iostream>
#include <string>
using namespace std;

class University_Student {
private:
    string name;
    string studentID;
    string department;
    float cgpa;

public:
    // Parameterized Constructor
    University_Student(string n, string id, string dept, float c) {
        name = n;
        studentID = id;
        department = dept;
        cgpa = c;
    }

    // Copy Constructor
    University_Student(const University_Student &student) {
        name = student.name;
        studentID = student.studentID;
        department = student.department;
        cgpa = student.cgpa;
    }

    // Display Function
    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Department: " << department << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    // Creating object using parameterized constructor
    University_Student student1("MD.Shahrier Hasan Dhali", "ET243121", "EEE", 3.76);

    // Creating object using copy constructor
    University_Student student2 = student1;

    cout << "Student 1 Details:" << endl;
    student1.display();

    cout << "\nStudent 2 Details (Copied):" << endl;
    student2.display();

    return 0;
}
