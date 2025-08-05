#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter a number\n");
	scanf("%d",&num);
	
	if(num%2){
		printf("given number is even number");
	}
	else{
		printf("given number is odd number");
	}
	return 0;
	

}
