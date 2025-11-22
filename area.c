// prog to find area of circle,square,rectangle and triangle
#include<stdio.h>
#include<math.h>
main()
{
	int r,s,l,b,ba,h,pi;
	float Carea,Sarea,Rarea,Tarea;
	pi=3.14;
	printf("enter the radius:");
	scanf("%d",&r);
	printf("enter the side:");
	scanf("%d",&s);
	printf("enter the length and breadth:");
	scanf("%d%d",&l,&b);
	printf("enter the height and base:");
	scanf("%d%d",&h,&ba);
	Carea=pi*r*r;
	printf("the area of the circle is %f\n",Carea);
	Sarea=s*s;
	printf("the area of the square is %f\n",Sarea);
	Rarea=l*b;
	printf("the area of the rectangle is %f\n",Rarea);
	Tarea=0.5*h*ba;
	printf("the area of the triangle is %f",Tarea);
	}
