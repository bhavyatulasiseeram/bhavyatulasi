//prog to find calculator
#include<stdio.h>
main()
{
	int n1,n2;
	char op;
	printf("enter 2 numbers:");
	scanf("%d%d",&n1,&n2);
	printf("enter operators:");
	scanf("\n");
	scanf("%c",&op);
	switch(op)
	{
		case '+':
		     printf("the sum is %d",n1+n2);
		     break;
		case '-':
		     printf("the dif is %d",n1-n2);
		     break;
		case '*':
		     printf("the product is %d",n1*n2);
		     break;
		case '/':
		     printf("the moduls is %d",n1/n2);
		     break;
		default:
		printf("invalid operator");
	}	
}
