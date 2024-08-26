// Following example demonstrates creating a derived class which is a template class from a
// base class which also a template class
#include <iostream>
using namespace std;
template<class Type1>
class Base
{
protected:
Type1 x;
public:
Base(Type1 x)
{
this->x = x;
}
void display()
{
cout<<"x = "<<x<<endl;
}
};
template<class Type1, class Type2>
class Derived : public Base<Type1>
{
private:
Type2 y;
public:
Derived(Type1 x, Type2 y) : Base<Type1>(x)
{
this->y = y;
}
void display()
{
Base<Type1>::display();
cout<<"y = "<<y<<endl;
}
};
int main()
{
Base<int> bobj(10);
bobj.display();
Derived<int,int> dobj(10, 20);
dobj.display();
return 0;
}
