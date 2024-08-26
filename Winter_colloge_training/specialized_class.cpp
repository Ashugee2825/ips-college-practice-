#include<iostream>
using namespace std;
template<class T>
class FindCharacter{
	public:
  FindCharter(t a)
	{
		cout<<a<<"Not a valid character "<endl;	
	}
};
template<>
class FindCharacter<char>{
	public:
	FindCharacter(char a)
	{
		cout<<a<<"is a valid Character"<<endl;
	}
};
int main()
{
	FindCharacter<int>obj1 (5);
	FindCharacter<float>obj2(4.56);
	FindCharacter<char> obj3 ('m');
	 return 0;
}
