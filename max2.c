//prog to find max of 3 numbers
#include<stdio.h>
main()
{
	int a,b,c,max;
	printf("enter 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>b)?((a>c)?a:c):((c>b)?c:b);
	printf("the maximum number is %d",max);
}
