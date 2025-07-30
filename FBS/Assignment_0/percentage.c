#include<stdio.h>
int main()
{
	int marathi=81,english=80,hindi=75,maths=80,science=79;
	int total_marks=marathi+english+hindi+maths+science;
	float percentage=total_marks*100/500;
	printf("Total marks is %d\n",total_marks);
	printf("Total percentage is %.2f",percentage);
	return 0;
}