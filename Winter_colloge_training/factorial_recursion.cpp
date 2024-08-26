// WAP to calculate facorial of given number using recursion
#include<iostream>
using namespace std;
long int factorial(int a)
{
    
    if(a<=0)
    {
        return 1;
    }
  
    return a*factorial(a-1);
}
int main()
{
    int n;
   
    cout << "enter number to calculate factorial";
    cin>>n;
    cout<< "factorial of "<<n<<" = "<< factorial(n);
}
