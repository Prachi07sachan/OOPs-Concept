#include <iostream>
using namespace std;

class Base {
protected:
    int* baseData;

public:
    
    Base() {
        baseData = new int(100);
        cout << "Base constructor: Memory allocated\n";
    }

    
    virtual ~Base() {
        delete baseData;
        cout << "Base destructor: Memory freed\n";
    }
};

class Derived : public Base {
private:
    int* derivedData;

public:
    
    Derived() {
        derivedData = new int(200);
        cout << "Derived constructor: Memory allocated\n";
    }

    
    ~Derived() {
        delete derivedData;
        cout << "Derived destructor: Memory freed\n";
    }
};

int main() {
    Base* obj = new Derived();   
    delete obj;                
    return 0;
}
