#include<stdio.h>
void main()
{
	int num_days;
	int num_years=num_days/365;
	int num_months=num_days%365/30;
	int num_weeks=num_days%365%30/7;
	int num_of_remaining_days=num_days%365%30%7;

	printf("enter the num_days:");
	scanf("%d",&num_days);
	
	printf("\n the num_years:%d",num_days/365);
	printf("\n the num_months:%d",num_days%365/30);
	printf("\n the num_weeks:%d",num_days%365%30/7);
	printf("\n num_of_remaining_days: %d ",num_days%365%30%7);


}