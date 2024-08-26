// C++ Program to demonstrate an Example of Non-type parameters for templates
#include<iostream>
using namespace std;
template<class T,int N>
class mysequence{
    T memblock[N];
    public:
    void setmember(int x, T value);
    T getmember(int x);
   
};

template<class T,int N>
void mysequence<T,N>:: setmember(int x, T b){
    memblock[x]= b;
}
template<class T,int N>
T mysequence<T,N>::getmember(int x){
    return memblock[x];
}
int main()
{
mysequence<int,5> myintseq;
mysequence<float,5> myfloatseq;
myintseq.setmember(0,100);
myfloatseq.setmember(3,3.343);
cout<<myintseq.getmember(0)<<endl;
cout<<myfloatseq.getmember(3)<<endl;
return 0;
}