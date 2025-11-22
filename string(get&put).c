// prog to read a string using gets & puts fun
#include<stdio.h>
#include<string.h>
main()
{
	char name[20];
	printf("enter your name:");
	gets(name);
	printf("My Name is :\t");
	puts(name);
}
