#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    float marks;

public:
    // Function to read student information
    void read() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to display student information
    void display() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    // Function to get marks
    float getMarks() {
        return marks;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Dynamic array of Student objects
    Student* students = new Student[n];

    // Read student details
    cout << "\nEnter Student Details:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].read();
    }

    // Display all student records
    cout << "\n--- Student Records ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].display();
    }

    // Pointer to find student with highest marks
    Student* highest = &students[0];

    for (int i = 1; i < n; i++) {
        if (students[i].getMarks() > highest->getMarks()) {
            highest = &students[i];
        }
    }

    // Display student with highest marks
    cout << "\n Student with Highest Marks \n";
    highest->display();

    // Release dynamically allocated memory
    delete[] students;

    return 0;
}