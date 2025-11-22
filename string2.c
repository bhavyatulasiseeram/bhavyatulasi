// prog to read a string from user 2
#include<stdio.h>
main()
{
	char name[20];
	printf("enter your name:");
	scanf("%[^\n]s",name);
	printf("My Name is %s",name);
}
