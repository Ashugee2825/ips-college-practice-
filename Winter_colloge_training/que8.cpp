// C++ Program to Add two numbers using function template
#include<iostream>
using namespace std;
template<typename T>
T add(T x, T y){
    return x+y;
}
int main()
{
    int x=5,y=7;
    cout<<"sum of "<<x <<" and "<<y<<" = "<<add(x,y)<<endl;
    float n=6.7,m=8.3;
     cout<<"sum of "<<n <<" and "<<m<<" = "<<add(n,m)<<endl;

}