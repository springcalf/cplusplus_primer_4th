#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str1;
	string str2;
	cout<<"please input str1"<<endl;
	cin>>str1;
	cout<<"please input str2"<<endl;
	cin>>str2;
	cout<<"str1="<<str1<<endl;
	cout<<"str2="<<str2<<endl;
	cout<<"str1.compare(str2):"<<str1.compare(str2)<<endl;
	int ret = str1.compare(str2);
	if(ret==0 )
	{
		cout<<"str1 is  same to str2"<<endl;
	}
	else if(ret > 0 )
	{
		cout<<"str1 is  larger than str2"<<endl;
	}
	else
	{
		cout<<"str1 is  smaller than str2"<<endl;
	}
	return 0;
}