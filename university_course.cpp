#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    double CGPA;

public:
    class Address {
    private:
        string city;
        string state;

    public:
        Address(string c, string s) {
            city = c;
            state = s;
        }

        void displayAddress() {
            cout << "City  : " << city << endl;
            cout << "State : " << state << endl;
        }
    };
    Student(int r, string n) {
        rollNo = r;
        name = n;
        CGPA = 0.0;
    }
    Student(int r, string n, double c) {
        rollNo = r;
        name = n;
        CGPA = c;
    }
    void updateCGPA(double CGPA) {
        this->CGPA = CGPA;
    }

    void display() {
        cout << "Roll No : " << rollNo << endl;
        cout << "Name    : " << name << endl;
        cout << "CGPA    : " << CGPA << endl;
    }
};

int main() {
    Student students[3] = {
        Student(101, "Rahul"),
        Student(102, "Aman", 8.5),
        Student(103, "Priya"),
    };
    students[0].updateCGPA(8.2);
    students[1].updateCGPA(7.8);
    cout << "Student Information" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "\nStudent " << i + 1 << endl;
        students[i].display();
    }
    cout << "\nAddress Information" << endl;

    Student::Address address1("Delhi", "Delhi");
    Student::Address address2("Ghaziabad", "Uttar Pradesh");

    cout << "\nAddress 1:" << endl;
    address1.displayAddress();

    cout << "\nAddress 2:" << endl;
    address2.displayAddress();

    return 0;
}