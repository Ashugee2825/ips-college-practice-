// Following program demonstrates working with a vector:
#include<iostream>
#include<vector>
using namespace std;
//print function to print the elements in the vector
void print(vector<int> &v)
{
cout<<"Elements in the vector are: ";
for(int i=0; i<v.size(); i++)
{
cout<<v[i]<<" ";
}
cout<<endl;
}
int main()
{
vector<int> myvector;
int num;
cout<<"Enter 5 elements to store into vector: ";
for(int i=0; i<5; i++)
{
cin>>num;
myvector.push_back(num); //inserts elements at the end
}
print(myvector);
//Print the size (no. of elements) of vector
cout<<"Size of vector is: "<<myvector.size()<<endl;
//Print the capacity of vector
cout<<"Capacity of vector is: "<<myvector.capacity()<<endl;
//Get an iterator which points to the first element
vector<int> :: iterator itr = myvector.begin();
//Insert an element at index 2
myvector.insert(itr+2, 8);
cout<<"After inserting: "<<endl;
print(myvector);
//Delete an element at index 4
myvector.erase(itr+4);
cout<<"After deletion: "<<endl;
print(myvector);
}