// to check whether the given number is palindrome or not using recursion

#include<stdio.h>
#include<conio.h>
int main()
{
	int num,pd;
	printf("\n enter a number :");
	scanf("%d",&num);
	pd=rev(num);
	if (pd==num)
	printf("\n %d is a palindrome number ",num);
	else
	printf("\n %d is not a palindrome number ",num);
}
int rev(int num)
{
	static int t=0;
	if (num==0)
	return t;
	else
	t=(t*10)+(num%10);
	return rev(num/10);
}

