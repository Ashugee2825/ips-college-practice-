#include<iostream>
#include<vector>
 using namespace std;
  
  
  int main(){
  	vector<int> num {1,2,3,4,5};
  	// declear iteraor
  		vector <int>:: iterator iter;
  	 iter =num.begin();
  	 
  	 cout << "num[0] = "<< *iter << endl;
  	 // iterator points to the 3Rd element
  	 iter = num.begin() + 2;
  	 cout << "num [2] = "<<* iter;
  	 
  	 // last element
  	 iter =num.end-1;
  	 cout << "num[4] ="<< *iter;
  	 return 0;
  	 
  	 
  }
