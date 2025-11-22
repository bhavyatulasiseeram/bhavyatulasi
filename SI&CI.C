//simple interest
#include<stdio.h>
#include<math.h>
main()
{
	float p,t,r,SI,CI,a;
	printf("enter principle,time,rate:");
	scanf("%f%f%f",&p,&t,&r);
	SI=(p*t*r)/100;
	CI=p*pow((1+r/100),t)-p;
	printf("simple interest=%f\n",SI);
	printf("compound interest=%f\n",CI);
}
