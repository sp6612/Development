#include<stdio.h>
void Display(int iRow,int iCol)
{

int i=0,j=0;

for(i=1;i<=iRow;i++)
{
	if(i>=2 && i<6)
	{
		for(j=1;j<=iCol;j++)
		 {
             if(j>=2 && j<6)
			 {
				 if(i==j)
				 
					 printf("*\t");
					 else
						 printf(" \t");
			}
			else
			{
				printf("*\t");
			}
		 }
	}
  	else
	{
		for(j=1;j<=iCol;j++)
		{
			printf("*\t");
		}
	}
	printf("\n");
}
}
		 












int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter Number of row\n");
	scanf("%d",&iValue1);
	
	printf("Enter Number of column\n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
	
	
	
}