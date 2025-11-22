// prog to find length of the string
#include<stdio.h>
#include<string.h>
main()
{
	char mystr[20];
	int i,len=0;
	printf("enter a string");
	gets9(mystr);
	for(i=0;mystr[i]!='\0';i++)
	{
		len++;
	}
	printf("The Lenght of the String is %d",len);
}
