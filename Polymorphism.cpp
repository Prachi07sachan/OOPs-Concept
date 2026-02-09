// function loverloading


class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Math m;
    cout << m.add(2, 3) << endl;
    cout << m.add(2, 3, 4) << endl;
    return 0;
}

// function overriding


class Teacher {
public:
    virtual void duty() {
        cout << "Teacher teaches students" << endl;
    }
};

class HOD : public Teacher {
public:
    void duty() {
        cout << "HOD manages department" << endl;
    }
};

int main() {
    Teacher* t;
    HOD h;
    t = &h;
    t->duty();
    return 0;
}

// Function overloading is demonstrated by defining multiple add() functions with different parameters in the same class.
// Function overriding is demonstrated when HOD provides its own implementation of the virtual duty() function of Teacher.
