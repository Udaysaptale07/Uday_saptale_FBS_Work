#include<stdio.h>
int main()
{
	int year;
	printf("enter a year:-");
	scanf("%d",&year);
	
	if ((year%4==0 && year%100!=0)|| (year%400==4))
	{
		printf("%d it is leap year",year);
	}
	else
	{
		printf("%d it is not a leap year",year);
	}
	return 0;
}