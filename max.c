#include<stdio.h>
main()
{
	int a,b,max;
	printf("enter 2 values");
	scanf("%d%d",&a,&b);
	max=a>b?a:b;
	printf("the maximum number is %d",max);
}
