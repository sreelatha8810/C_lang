#include<stdio.h>
int main()
{
	int num_days;
	int num_hours=num_days*24;
	int num_minutes=num_days*24*60;
	int num_seconds=num_days*24*60*60;

	printf("enter the num_days:");
	scanf("%d",&num_days);

	printf("\n the num_hours:%d",num_days*24);
	printf("\n the num_minutes:%d",num_days*60*24);
	printf("\n the num_seconds:%d",num_days*24*60*60);

	return 1;
}