#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person() {
      
    }
};

class Student : public Person {
public:
    int roll;

    Student() {
        
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Prachi";
    s1.age = 19;
    s1.roll = 101;

    s1.getInfo();
    return 0;
}

// This code demonstrates inheritance where Student inherits public members of Person.
// The derived class accesses and uses base class data through inheritance.
