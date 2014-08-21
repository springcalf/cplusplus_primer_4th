#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main(void)
{
	string line;
	string temp;
	while(getline(cin,line))
	{
	}
	vector<string> vec;
	for(int i=0;i!=line.size();)
	{
		if(isspace(line[i]))
		{
			if(!temp.empty())
			{
				vec.push_back(temp);
			}
			temp.clear();
			i++;
			continue;
		}
		else
		{
			temp.push_back(line[i]);
		}
		i++;
		if((i==line.size())&&!temp.empty())
		{
			vec.push_back(temp);
		}
	}
	for(int j= 0;j != vec.size();j++)
	{
		string handle_str=vec[j];
		for(int k= 0;k!=handle_str.size();k++)
		{
			if(islower(handle_str[k]))
			{
				handle_str[k] = toupper(handle_str[k]);
			}
		}
		vec[j] = handle_str;
		cout<<vec[j]<<" ";
		if((j+1)%8 == 0)
		{
			cout<<endl;
		}
	}
	cout<<endl;
	return 0;
}