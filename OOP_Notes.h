
/*
 * Object Oriented Programming (OOP) Notes
 * Compiled for revision purposes.
 */

// Object
/*
An object represents a real-world entity.
Example: Teacher, Student, Car.
An object contains:
- Properties (Data / Attributes) – variables that store information.
- Functions (Methods / Member functions) – operations performed on data.
Example (Teacher):
- name
- department
- salary
*/

// Class
/*
A class is a blueprint of objects.
It defines the properties (data members) and methods (member functions) that objects will have.
Example:
*/
#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    string name;
    string dept;
    int salary;

public:
    // Default Constructor
    Teacher() {
        dept = "CS";
        cout << "Default constructor called" << endl;
    }

    // Parameterized Constructor
    Teacher(string n, string d, int s) {
        name = n;
        dept = d;
        salary = s;
    }

    // Copy Constructor
    Teacher(const Teacher &t) {
        name = t.name;
        dept = t.dept;
        salary = t.salary;
    }

    // Destructor
    ~Teacher() {
        cout << "Destructor called" << endl;
    }

    // Setter
    void setSalary(int s) {
        salary = s;
    }

    // Getter
    int getSalary() {
        return salary;
    }

    // Method
    void changeDept(string newDept) {
        dept = newDept;
    }

    // Display
    void display() {
        cout << "Name: " << name << ", Dept: " << dept << ", Salary: " << salary << endl;
    }
};

/*
Object creation and usage:
*/
int main() {
    // Default constructor
    Teacher t1;
    t1.display();

    // Parameterized constructor
    Teacher t2("Prachi", "CS", 30000);
    t2.display();

    // Copy constructor
    Teacher t3 = t2;
    t3.display();

    // Using setters/getters
    t1.setSalary(25000);
    cout << "Salary: " << t1.getSalary() << endl;

    return 0;
}

// Access Modifiers (Access Specifiers)
/*
Access modifiers control the visibility of class members.
- Private: Accessible only inside the class. Used for data hiding.
- Public: Accessible everywhere in the program.
- Protected: Accessible inside the class and in derived classes.
*/

// Pointer in C++
/*
A pointer is a variable that stores the memory address of another variable.
Pointers are used for dynamic memory allocation and efficient memory management.
Syntax: datatype *pointer_name;
Example:
*/
int mainPointers() {
    int a = 10;
    int *ptr = &a;
    cout << "Value: " << a << endl;
    cout << "Address: " << &a << endl;
    cout << "Pointer: " << ptr << endl;
    cout << "Dereference: " << *ptr << endl;
    return 0;
}

/*
Explanation:
- &a → gives the address of variable a
- ptr → stores the address of a
- *ptr → gives the value stored at that address
*/

/*
In shallow copy, both objects share the same memory address.
*/
#include <iostream>
using namespace std;

class A {
public:
    int *x;

    A(int val) {
        x = new int(val);
    }
};

int main() {

    A a1(10);
    A a2 = a1;   // shallow copy

    *a2.x = 20;

    cout << *a1.x << endl;
    cout << *a2.x << endl;

}

/*
Explanation:
Both objects point to the same memory, so changing a2 also changes a1.
*/

/*
In deep copy, a new memory location is created and the value is copied.
*/
#include <iostream>
using namespace std;

class A {
public:
    int *x;

    A(int val) {
        x = new int(val);
    }

    A(const A &obj) {
        x = new int(*obj.x);
    }
};

int main() {

    A a1(10);
    A a2 = a1;   // deep copy

    *a2.x = 20;

    cout << *a1.x << endl;
    cout << *a2.x << endl;

}

/*
Explanation:
Both objects have different memory, so changing a2 does not affect a1.
*/

// Static Keyword
/*
Static keyword is used for memory management.
*/

// Static Variable Inside a Function
/*
A static variable inside a function:
- Is initialized only once.
- Retains its value between function calls.
Example:
*/
void func() {
    static int x = 0;
    cout << x << endl;
    x++;
}

int mainStatic() {
    func();  // 0
    func();  // 1
    func();  // 2
    return 0;
}

// Static Variable Inside a Class
/*
A static variable in a class:
- Is created only once.
- Shared by all objects of the class.
Example:
*/
class Example {
public:
    static int count;
    Example() {
        count++;
    }
};

int Example::count = 0;

int mainStaticClass() {
    Example e1, e2, e3;
    cout << "Count: " << Example::count << endl;  // 3
    return 0;
}

// Static Object
/*
A static object exists for the entire lifetime of the program.
It is destroyed only when the program terminates.
*/

// Friend Function
/*
A friend function is not a member of the class, but it can access private and protected members of the class using the friend keyword.
Friend function is used when an external function needs access to private data.
Example:
*/
class StudentFriend {
private:
    int marks;
public:
    StudentFriend(int m) {
        marks = m;
    }
    friend void showMarks(StudentFriend s);
};

void showMarks(StudentFriend s) {
    cout << "Marks: " << s.marks << endl;
}

int mainFriend() {
    StudentFriend s(85);
    showMarks(s);
    return 0;
}

// Virtual Functions
/*
Virtual functions are functions in the base class that can be overridden in derived classes.
They enable runtime polymorphism, where the correct function is called based on the object type at runtime.
Use the 'virtual' keyword in the base class and 'override' in derived classes.
Example:
*/
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
    virtual ~Animal() {}  // Virtual destructor
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int mainVirtual() {
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();
    a1->sound();  // Dog barks
    a2->sound();  // Cat meows
    delete a1;
    delete a2;
    return 0;
}