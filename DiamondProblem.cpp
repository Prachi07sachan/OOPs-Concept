#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void speak() {
        cout << "Animal speaks" << endl;
    }
};

// Derived classes (virtual inheritance)
class Mammal : virtual public Animal {};
class Bird   : virtual public Animal {};

// Derived from both Mammal and Bird
class Bat : public Mammal, public Bird {};

int main() {
    Bat b;
    b.speak();   // No ambiguity due to virtual inheritance
    return 0;
}