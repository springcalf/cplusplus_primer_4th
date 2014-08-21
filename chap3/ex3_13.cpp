#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int array[]={1,2,3,4,5,6,7,8,9};
	vector<int> vec;
	for(int i=0;i<sizeof(array)/sizeof(array[0]);i++)
	{
		vec.push_back(array[i]);
	}
	for(int j=0;j!=vec.size();)
	{
		if(vec.size()%2 !=0)
		{
			if(j+1==vec.size())
			{
				cout<<"only num vec["<<j<<"]:"<<vec[j]<<endl;
				break;
			}
		}
		cout<<"vec["<<j<<"]:"<<vec[j]<<"+"<<"vec["<<j+1<<"]:"<<vec[j+1]<<"="<<vec[j]+vec[j+1]<<endl;
		j=j+2;
	}
	cout<<"*******************************************"<<endl;
	for(int k=0;;)
	{
		if(vec.size()%2 !=0)
		{
			if(k==vec.size()/2)
			{
				cout<<"only num vec["<<k<<"]:"<<vec[k]<<endl;
				break;
			}
		}
		if(k>=vec.size()/2)
		{
			break;
		}
		cout<<"vec["<<k<<"]:"<<vec[k]<<"+"<<"vec["<<vec.size()-1-k<<"]:"<<vec[vec.size()-1-k]<<"="<<vec[k]+vec[vec.size()-1-k]<<endl;
		k++;
	}

	return 0;
}