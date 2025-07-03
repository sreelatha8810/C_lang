#include<stdio.h>
int main()
{
	int num_1;
	int num_2;
	int num_3;
	int num_4;
	int num_5;
	float average;
 	
	printf("enter the value of num_1:");
	scanf("%d",&num_1);
	printf("\n the value of num_1:%d",num_1);

	printf("\n enter the value of num_2:");
	scanf("%d",&num_2);
	printf("\n the value of num_2:%d",num_2);

	printf("\n enter the value of num_3:");
	scanf("%d",&num_3);
	printf("\n the value of num_3:%d",num_3);

	printf("\n enter the value of num_4:");
	scanf("%d",&num_4);
	printf("\n the value of num_4:%d",num_4);

	printf("\n enter the value of num_5:");
	scanf("%d",&num_5);
	printf("\n the value of num_5:%d",num_5);

	average=(num_1+num_2+num_3+num_4+num_5)/5;

	printf("\n the average is:%d",(num_1+num_2+num_3+num_4+num_5)/5);
	return 0;
}