#include <iostream>
using namespace std;

// Abstract class
class Teacher {
public:
    virtual void work() = 0;   // pure virtual function
};

// Derived class
class HOD : public Teacher {
public:
    void work() {
        cout << "HOD manages department" << endl;
    }
};

int main() {
    Teacher* t;
    HOD h;
    t = &h;
    t->work();
    return 0;
}

// Abstraction is achieved by accessing the derived class implementation through a base class interface.
// The base class hides implementation details and only exposes the required function.
