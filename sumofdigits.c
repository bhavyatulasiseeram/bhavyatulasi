//sum of digits of  number
#include<stdio.h>
main()
{
	int n,r,sum=0;
	printf("enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("the sum of digits: %d",sum);
}
