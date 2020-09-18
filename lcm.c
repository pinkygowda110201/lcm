#include<stdio.h>
int lcm(int,int);
int gcd(int,int);
main()
{
	int a,b,ans;
	printf("Input first number: ");
	scanf("%d",&a);
	printf("\nInput second number: ");
	scanf("%d",&b);
	ans=lcm(a,b);
	printf("\nLCM of %d and %d = %d",a,b,ans);
}
int gcd(int a, int b)
{
	if(a==0)
	{
		return b;
	}
	return gcd(b%a,a);
}
int lcm(int a, int b)
{
 return (a*b)/gcd(a,b)	;
}
