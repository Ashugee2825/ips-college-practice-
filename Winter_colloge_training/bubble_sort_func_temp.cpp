// Following program performs Bubble sort using function templates
#include <iostream>
using namespace std;
template<class Type1, class Type2>
void sort(Type1 arr[], Type2 n)
{
for(int i = 0; i < n - 1; i++)
{
for(int j = 0; j < n - i - 1; j++)
{
if(arr[j] > arr[j+1])
{
Type1 temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
}
}
}
}
int main()
{
    int n;
cout<<"Enter the no. of elements: ";
cin>>n;
cout<<"Enter "<<n<<" integers: ";
int iarr[n];
for(int i=0; i<n; i++)
{
cin>>iarr[i];
}
cout<<"Enter "<<n<<" float values: ";
float farr[n];
for(int i=0; i<n; i++)
{
cin>>farr[i];
}
sort(iarr, n);
sort(farr, n);
cout<<"After sorting integer values are: ";
for(int i=0; i<n; i++)
{
cout<<iarr[i]<<" ";
}
cout<<"\nAfter sorting floating point values are: ";
for(int i=0; i<n; i++)
{
cout<<farr[i]<<" ";
}
return 0;
}
