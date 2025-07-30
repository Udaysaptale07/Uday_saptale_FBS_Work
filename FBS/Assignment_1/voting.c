#include<stdio.h>
	int main()
	{
		int age;
		printf("enter a age\n");
		scanf("%d",&age);
		
		if(age>=18)
		{
			printf("they are eligible for voting");
		}
		else
		{
			printf("They are not eligibale for voting");
		}
		return 0;
	}
