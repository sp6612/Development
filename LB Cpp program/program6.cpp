#include<iostream>
using namespace std;

class Demo
{
	public :
	
	void Display(int a)
	{
		for(int i=a;i>=1;i--)
		{
			cout<<i<<endl;
		}
	}
		
		
	};
	


int main()
{
	int iValue=0;
	
	cout<<"Enter Number"<<endl;
	cin>>iValue;
	Demo d;
	d.Display(iValue);
	
	return 0;
}