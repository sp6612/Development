using System;

class Test
{
public void Display(int iRow,int iCol)
{
for(int i=iRow;i>=1;i--)
{
	for(int j=1;j<=iCol;j++)
	{
		if((j%2)==0)
		{
		Console.Write("#\t");
	     }
	     else
	     {
	     	Console.Write("*\t");
	     }
	}
	Console.WriteLine();

}
}
}

class pgm1
{

static void Main(string []arg)
{
int no1,no2;

Console.WriteLine("Enter no of row");
no1=Convert.ToInt32(Console.ReadLine());

Console.WriteLine("Enter no of col");
no2=Convert.ToInt32(Console.ReadLine());

Test obj=new Test();

obj.Display(no1,no2);

}

	}