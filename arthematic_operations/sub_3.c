#include<stdio.h>
int main()
{
	int num_1;
	int num_2;
	int num_3;
	int num_4;
	int num_5=num_1-num_2-num_3-num_4;

	printf("enter the value of num_1:");
	scanf("%d\n",&num_1);
	printf("the value of num_1:%d",num_1);

	printf("enter the value of of num_2:");
	scanf("%d\n",&num_2);
	printf("the value of num_2:%d",num_2);

	printf("enter the value of num_3:");
	scanf("%d\n",&num_3);
	printf("the value of num_3:%d",num_3);

	printf("enter the value of num_4:");
	scanf("%d\n",&num_4);
	printf("the value of num_4:%d",num_4);

	printf("the value of num_5:%d",num_1-num_2-num_3-num_4);
	return 4;
}