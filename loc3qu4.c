// to find the factorial of a given number using recursion

#include<stdio.h>
#include<conio.h>
int main()
{
	int no,f;
	printf("\n enter the number :");
	scanf("%d",&no);
	printf("\n factorial of the given number is=%d",fact(no));
	
}
int fact (int no)
{
	if (no==0)
	return 1;
	else
	return no*fact(no-1);
}
