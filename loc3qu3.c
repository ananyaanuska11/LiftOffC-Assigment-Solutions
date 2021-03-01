// to find the lcm and gcd of two number using recursion

#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2;
	printf("\n enter first number :");
	scanf("%d",&num1);
	printf("\n enter second number :");
	scanf("%d",&num2);
	printf("\n LCM of two number=%d",lcm(num1,num2));
	printf("\n GCD of two number=%d",gcd(num1,num2));
}
int lcm (int num1,int num2)
{
	static int x=0;
	x=x+num2;
	if (x%num1==0 && x%num2==0)
	return x;
	return lcm(num1,num2);
}
int gcd (int num1,int num2)
{
	if (num1==0)
	return num2;
	else if (num2==0)
	return num1;
	else gcd (num2,num1%num2);	
}
