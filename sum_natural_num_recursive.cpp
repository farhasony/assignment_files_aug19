#include<stdio.h>
int addnum(int);
int main()
{
	int num;
	printf("enter positive num\n");
	scanf("%d",&num);
	printf("sum=%d \n",addnum(num));
	return 0;
}
int addnum(int n)
{
    if(n!=0)
	return n+addnum(n-1);
	else
	return n;	
}
