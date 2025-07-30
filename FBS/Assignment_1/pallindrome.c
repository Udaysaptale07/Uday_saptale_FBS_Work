#include<stdio.h>
int main()
{
	int num ,rev,a1,a2,a3,a4,ab;
	printf("enter a number\n");
	scanf("%d",&num);
	
	a1=num%10;
	ab=num/10;
	a2=ab%10;
	a3=ab/10;
	rev=a1*100+a2*10+a3;
	
//	printf("rev %d",rev);
	
	if(num==rev)
	{
		printf("Its pallindrome number");
	}
	else
	{
		printf("Its not Pallindrome number");
	}
	return 0;
}