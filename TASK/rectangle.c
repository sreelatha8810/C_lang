#include<stdio.h>
void main()
{
	float length;
	float breadth;
	float area;
	float perimeter;

	printf("enter the length of rectangle:");
	scanf("%f",&length);
	printf("\n the length of rectangle:%f",length);

	printf("\n enter the breadth of rectangle:");
	scanf("%f",&breadth);
	printf("\n the the breadth of rectangle:%f",breadth);

	area=length*breadth;

	printf("\n the area of rectangle:%f",length*breadth);
 
	perimeter=2*(breadth+length);

	printf("\n the perimeter of rectangle :%f",2*(breadth+length));	
}