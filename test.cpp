#include<iostream>
using namespace std;
class Student {
public:
    string name;
    int rollno;
    float gpa;
    int age;

    Student() { // Default Constructor

    }

    Student(string n, int r, float g, int a) { // Parameterised Constructor
        name = n;
        rollno = r;
        gpa = g;
        age = a;
    }
};


int main() {
    Student x("Arya stark", 89, 8.79, 15);
    x.age = 16;
    x.rollno = 18;
    // x.name = "Jon Snow";
    // x.rollno = 8;
    // x.gpa = 8.13;
    // cout << "Enter Your age : ";
    // cin >> x.age;
    // U have enter age first after running the program in terminal

    Student x2;
    x2.name = "Sam";
    x2.rollno = 9;
    x2.gpa = 7.6;
    cout << "Enter Your age : ";
    cin >> x2.age;
    // U have enter age first after running the program in terminal

    cout << "\n";
    cout << "NAME: " << x.name << "\n" << "Roll No: " << x.rollno  << "\n" << "GPA: " << x.gpa  << "\n" << "Age: " << x.age << "\n";
    cout << "\n";
    cout << "NAME: " << x2.name << "\n" << "Roll No: " << x2.rollno  << "\n" << "GPA: " << x2.gpa << "\n" << "Age: " << x2.age  << "\n";
    
}