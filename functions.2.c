//prog on func.2
#include<stdio.h>
void addition(int,int);
main()
{
	int a,b;
	printf("enter a nd b values:");
	scanf("%d%d",&a,&b);
	addition(a,b);
	addition(2,5);
}
void addition(int p,int q)
{
	int result;
	result = p+q;
	printf("The result is %d\n",result);
}
