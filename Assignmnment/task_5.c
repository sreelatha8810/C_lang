#include<stdio.h>
void main()
{	
	int sales;
	printf("enter the sales:");
	scanf("%d",&sales);
	printf("the sales:%d",sales);
	sales%=50;
	printf("the sales:%d",sales);
}