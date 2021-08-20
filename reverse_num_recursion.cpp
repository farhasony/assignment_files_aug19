#include<stdio.h>
int revfunction(int);
int sum=0,rem;
int main()
{
	int num,rev;
	printf("enter num\n");
	scanf("%d",&num);
	rev=revfunction(num);
	printf("%d after reverse\n",rev);
	return 0;
}
revfunction(int num)
{
if(num)
	{
	rem=num%10;
	sum=sum*10+rem;
	revfunction(num/10);
	}
	else
	return sum;	
}
