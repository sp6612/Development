using System;

class Test
{
public void Display(int iRow,int iCol)
{
for(int i=0;i<iRow;i++)
{
	for(int j=0;j<iCol;j++)
	{
		if(j<=i)
		{
			Console.Write("*\t");
		}
		else
		{
			Console.Write("#\t");
		}

	}
	Console.WriteLine();
}
}
}

class program
{
static void Main(string []arg)
{
int row=0,col=0;

Console.WriteLine("enter The row");
row=Convert.ToInt32(Console.ReadLine());

Console.WriteLine("Enter the col");
col=Convert.ToInt32(Console.ReadLine());

Test obj=new Test();

obj.Display(row,col);

}
}	