//prog to compare 3 numbers
#include<stdio.h>
main()
{
	int n1,n2,n3;
	printf("enter 3 numbers:");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("%d is greatest",n1);
		}
		else
		{
			printf("%d is greatest",n3);
		}
	}
	if(n2>n3)
	{
		printf("%d is greatest",n2);
	}
	else
	{
		printf("%d is greatest",n3);
	}
}
