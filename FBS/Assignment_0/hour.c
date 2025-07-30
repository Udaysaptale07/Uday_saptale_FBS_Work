#include<stdio.h>
int main()
{
	int min=80,hour,Remaining_minutes;
	hour=min/60;
	Remaining_minutes=min%60;
	printf("Total hour is %d\n",hour);
	printf("Remaining minutes is %d",Remaining_minutes);
	return 0;
}