#include <iostream>
using namespace std;

class Student {
public:
    int rollNumber;
    string studentName;
    Student* nextStudent;

    // Constructor
    Student(int roll, string name) {
        rollNumber = roll;
        studentName = name;
        nextStudent = nullptr;
    }
};

int main() {

    // Create three Student objects
    Student student1(1, "Rahul");
    Student student2(2, "Aman");
    Student student3(3, "Rohit");

    // Connect students
    student1.nextStudent = &student2;
    student2.nextStudent = &student3;
    student3.nextStudent = nullptr;

    // Display names starting from first student
    Student* current = &student1;

    while (current != nullptr) {
        cout << "Student Name: " << current->studentName << endl;
        current = current->nextStudent;
    }

    return 0;
}