#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> num {1, 2, 3, 4, 5};
  cout<<"Elements of vector printed one by one using at() function"<<endl;
  cout << "Element at Index 0: " << num.at(0) << endl;
  cout << "Element at Index 2: " << num.at(2) << endl;
  cout << "Element at Index 4: " << num.at(4)<<endl;
  cout<<"Elements of vector printed by loop with at()"<<endl;
  for(int i=0;i<num.size();i++)
  {
      cout<<"Element at Index "<<i<<": "<<num.at(i)<<endl;
  }
  cout<<"Elements of vector printed by loop like array"<<endl;
    for(int i=0;i<num.size();i++)
  {
      cout<<"Element at Index "<<i<<": "<<num[i]<<endl;
  }
cout<<"Elements of vector printed by range loop"<<endl;
for(int itr:num)
{
    cout<<itr<<endl;
}

  return 0;
}