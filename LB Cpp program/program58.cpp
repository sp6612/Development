#include<iostream>

using namespace std;

class Demo
{
public:
char *p;
int size;

Demo()
{
	p=new char[60];
}
void Accept()
{
	cout<<"Enter String"<<endl;
	scanf("%[^'\n]s",p);
	
	
}
void Display()
{
	while(*p!='\0')
	{
		cout<<*p;
		p++;
	}
	cout<<endl;
}	
int strlenx()
{
	int icnt=0;
	while(*p!='\0')
	{
		icnt++;
		p++;
	}
	return icnt;
}
	
};

int main()
{

	Demo d;
	d.Accept();
	//d.Display();
	int res=d.strlenx();
	cout<<res;
	return 0;
}