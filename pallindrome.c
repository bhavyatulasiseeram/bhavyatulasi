//prog to find given num is pallindrom or not
#include<stdio.h>
main()
{
	int n,r,rev=0,temp;
	printf("enter a number:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(temp=rev)
	printf("%d is pallindrome",temp);
	else
	printf("%d is not pallindrome",temp);
	
	}
