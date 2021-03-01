// to find the factorial of a given number using funcion

#include<stdio.h>
#include<conio.h>
int main ()
{
	int x;
	printf("\n enter a positive number :");
	scanf("%d",&x);
	printf("\n factorial of the given number is=%d",fact(x));
}
int fact (int x)
{
	int f=1,i;
		for (i=1;i<=x;i++)
				f=f*i;
			return f;	
}
