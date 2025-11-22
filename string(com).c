//prog to combine 2 strings
#include<stdio.h>
#include<string.h>
main()
{
	char s1[20],s2[20];
	int i,j,l;
	printf("enter str1:");
	gets(s1);
	printf("enter str2:");
	gets(s2);
	for(i=0;s1[i]!='\0';i++)
	{
		l++;
	}
	for(j=0;s2[j]!='\0';j++,l++)
	{
		s1[l]=s2[j];
	}
	s1[l]='\0';
	printf("The concotration string is %s",s1);
	}
