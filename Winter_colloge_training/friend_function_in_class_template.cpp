// ollowing example demonstrates a friend function in class template
#include <iostream>
using namespace std;
template<class Type>
class Swapper
{
public:
Type x, y;
public:
Swapper(Type x, Type y)
{
this->x = x;
this->y = y;
}
template<class Type1>
friend void swap(Swapper<Type1> &);
void display()
{
cout<<"x="<<x<<", y="<<y<<endl;
}
};
template<class Type1>
void swap(Swapper<Type1> &s)
{
Type1 temp;
temp = s.x;
s.x = s.y;
s.y = temp;
}
int main()
{
Swapper<int> iobj(10, 20);
cout<<"Before swap:"<<endl;
iobj.display();
swap(iobj);
cout<<"After swap:"<<endl;
iobj.display();
Swapper<float> fobj(10.3, 20.6);
cout<<"Before swap:"<<endl;
fobj.display();
swap(fobj);
cout<<"After swap:"<<endl;
fobj.display();
return 0;
}