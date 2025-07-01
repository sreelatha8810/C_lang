#include<stdio.h>
void main()
{	
	int discount;
	printf("enter the discount:");
	scanf("%d",&discount);
	printf("the discount:%d",discount);
	discount-=10;
	printf("the discount:%d",discount);
}