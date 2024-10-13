#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;

public:
    Employee(){
        name="unknown";
        id=0;
        salary=0.0;
        cout << "Default constructor called" <<endl;
    }
    Employee(string n, int id, double salary){
        name=n;
        this->id=id;
        this->salary=salary;
        cout << "Parameterized constructor called" <<endl;
    }
    Employee(const Employee& E)
    {
        name=E.name;
        id=E.id;
        salary=E.salary;
        cout << "Copy constructor called" << endl;
    }
    string getName() {
        return name;
    }
    int getId() {
        return id;
    }
    double getSalary() {
        return salary;
    }
    void setName(string name) {
        this->name = name;
    }
    void setId(int id) {
        this->id = id;
    }
    void setSalary(double salary) {
        this->salary = salary;
    }
    bool operator==(Employee other) {
        return id == other.id;
    }
    bool operator<(Employee other) {
        return salary < other.salary;
    }
    void display() {
    cout << "Employee ID: " << id << ", Name: " << name << ", Salary: $" << salary << endl;
    }
};
int main() {
    Employee emp1;
    cout << "emp1 Details: ";
    emp1.display();
    Employee emp2("Jane Smith", 102, 55000);
    cout << "emp2 Details: ";
    emp2.display();
    Employee emp3 = emp2;
    cout << "emp3 Details: ";
    emp3.display();
    if (emp1 == emp2) {
        cout << "emp1 and emp2 have the same ID." << endl;
    } else {
        cout << "emp1 and emp2 have different IDs." <<endl;
    }
    if (emp1 < emp2) {
    cout << "emp1 has a lower salary than emp2." <<endl;
     } else {
    cout << "emp1 has a higher or equal salary compared to emp2." <<endl;
    }

    return 0;
}