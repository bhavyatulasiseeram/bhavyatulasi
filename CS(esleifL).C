//prog to compare two numbers
#include<stdio.h>
main()
{
	int n1,n2;
	printf("enter 2 numbers:");
	scanf("%d%d",&n1,&n2);
	if(n1>n2)
	{
		printf("%d is > %d",n1,n2);
	}
	else if(n2>n1)
	{
		printf("%d is > %d",n2,n1);
	}
	else
	{
		printf("both are equal");
	}
}
