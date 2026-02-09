#include <iostream>
#include <string>
using namespace std;
class Teacher
{
public:
      string name;
      int id;

      Teacher()
      {
            cout << "i am constructor" << endl;
      }
      void setSalary(int s)
      {
            salary = s;
      }
      void setDept(string d) {
        dept = d;
    }
      int getSalary()
      {
            return salary;
      }
       string getDept() {
        return dept;
    }

private:
      int salary;
      string dept;
};

int main()
{
      Teacher t1;
      t1.name = "Prachi";
      t1.id = 19;

      t1.setSalary(8000);
      t1.setDept("CS");

      cout << "Salary: " << t1.getSalary() << endl;
      cout << "Department: " << t1.getDept() << endl;

      return 0;
}

// This code demonstrates encapsulation by keeping salary and department private
// and accessing them through public setter and getter methods.
