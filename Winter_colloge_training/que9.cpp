// C++ program to find Sum of numbers using Overload template function
#include<iostream>
using namespace std;
template<typename T>
T add(T x, T y){
    return x+y;
}
template<typename T>
T add(T x, T y, T z)
{
    return x+y+z;
}
int main()
{
    int x=5,y=7;
    cout<<"sum of "<<x <<" and "<<y<<" = "<<add(x,y)<<endl;
    float n=6.7,m=8.3;
     cout<<"sum of "<<n <<" and "<<m<<" = "<<add(n,m)<<endl;
     int z=9;
    cout<<"sum of "<<x <<" , "<<y<<" and "<<z<<" = "<<add(x,y,z)<<endl;
    float o=4.5;
     cout<<"sum of "<<n <<" , "<<m<<" and"<<o<<" = "<<add(n,m,o)<<endl;

}