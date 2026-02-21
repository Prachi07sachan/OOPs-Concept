#include <iostream>
using namespace std;

class Calc {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calc c;
    cout << c.add(2, 3) << endl;      // 5
    cout << c.add(2, 3, 4) << endl;   // 9
    return 0;
}