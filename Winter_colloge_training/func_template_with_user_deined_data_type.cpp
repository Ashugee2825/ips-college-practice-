// Function Templates with User-defined Types
#include<iostream>
using namespace std;
class student{
    public:
int age;
string name;

student(int a, string n)
{
    this->age=a;
    this->name=n;
}

};
template <class T>
void display(T &obj)
{
    cout<<"Name is "<<obj.name<<endl;
    cout<<"Age is " <<obj.age<<endl;
}
int main()
{
    student d1(22,"Praveen");
    display(d1);
}