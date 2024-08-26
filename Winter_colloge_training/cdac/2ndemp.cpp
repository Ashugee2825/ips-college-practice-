/* 2.	Create a class, Employee which has empno, rank, department, salary
 as member data, and get and show as member functions.
  */
#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int empno;
    string rank;
    string department;
    double salary;

public:
    void get();
    void show();
};

void Employee::get() {
    cout << "Enter employee number: ";
    cin >> empno;
    cin.ignore(); // Clear the input buffer

    cout << "Enter employee rank: ";
    getline(cin, rank);

    cout << "Enter department: ";
    getline(cin, department);

    cout << "Enter salary: ";
    cin >> salary;
}

void Employee::show() {
    cout << "\nEmployee details:\n";
    cout << "Employee number: " << empno << endl;
    cout << "Rank: " << rank << endl;
    cout << "Department: " << department << endl;
    cout << "Salary: $" << salary << endl;
}

int main() {
    Employee emp;

    // Get employee details
    emp.get();

    // Display employee details
    emp.show();

    return 0;
}
