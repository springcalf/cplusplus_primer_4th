#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str1;
	cout<<"please input str1"<<endl;
	cin>>str1;
	for(int i=0;i!=str1.size();i++)
	{
		if(ispunct(str1[i]))
		{
			str1.erase(i,1);
		}
	}
	cout<<str1<<endl;
	return 0;
}