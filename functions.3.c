#include<stdio.h>
int main();
main()
{
	int result,sum ;
	result=addition();
	sum=addition();
	printf("The result is %d",sum);
	printf("The result is %d",result);
	}
	int addition()
	{
		int a,b,c;
		printf("enter a nd b values:");
		scanf("%d%d",&a,&b);
		c=a+b;
		return c ;
	}
