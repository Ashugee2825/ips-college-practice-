/* 1.	Create a class person which has member variables as Name, Age, and Address. 
  There are two member functions in this class showData ( ), getData ( ),
   though which one can collect the information and show it to user. */

#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;
    string address;

public:
    void getData();
    void showData();

    friend void displayPersonData(const Person &person);
};

void Person::getData() {
    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter age: ";
    cin >> age;
    cin.ignore(); // Clear the input buffer

    cout << "Enter address: ";
    getline(cin, address);
}

void Person::showData() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl;
}

void displayPersonData(const Person &person) {
    cout << "\nFriend function displayPersonData() accessing private member variables:\n";
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Address: " << person.address << endl;
}

int main() {
    Person person;

    // Collect information
    cout << "Enter details:\n";
    person.getData();

    // Display information using member function
    cout << "\nDetails entered using member function:\n";
    person.showData();

    // Display information using friend function
    displayPersonData(person);

    return 0;
}
