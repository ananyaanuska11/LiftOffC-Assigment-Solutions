//to fnd the square of any number using function

#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("\n enter a number :");
	scanf("%d",&num);
	printf("\n square of the given number is=%d",sq(num));
}
int sq(int num)
{
	int sq;
	sq= num*num;
	return sq;
}
