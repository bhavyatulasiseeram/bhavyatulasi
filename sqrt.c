//prog to find square
#include<stdio.h>
#include<math.h>
main()
{
	int num;
	float squareroot;
	printf("enter a number:");
	scanf("%d",&num);
	squareroot=sqrt(num);
	printf("the square root of %d is %.4f",num,squareroot);
}
