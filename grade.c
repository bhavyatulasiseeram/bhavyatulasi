//prog to find grade of student
#include<stdio.h>
main()
{
	char grade='D';
	switch(grade)
	{
		case'A':
			printf("excellent");
			break;
			case'B':
				printf("very good");
				break;
				case'C':
					printf("good");
					break;
					case'F':
						printf("fail");
						break;
						default:
							printf("invalid option");
	}
}
