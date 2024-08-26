// Class Templates and Static Variables
#include <iostream>
using namespace std;
template<class Type>
class Sample
{
private:
Type data;
public:
static int count;
Sample()
{
count++;
}
static void show()
{
cout<<count<<endl;
}
};
template<class Type>
int Sample<Type> :: count = 0;
int main()
{
Sample<int> i1;
Sample<int> i2;
Sample<int> i3;
Sample<char> c;
Sample<double> d1;
Sample<double> d2;
cout<<"Number of integer objects: ";
Sample<int>::show();
cout<<"Number of char objects: ";
Sample<char>::show();
cout<<"Number of double objects: ";
Sample<double>::show();
return 0;
}