//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.

#include<stdio.h>
int main() {
	int a,b;
	char oper;

	printf("enter a 1st number\n");
	scanf("%d",&a);

	printf("Enter a second number\n");
	scanf("%d",&b);

	printf("enter a opeartor(+,-,*,/,%)\n");
	scanf(" %c",&oper);

	if(oper=='+') {
		int sum=a+b;
		printf("%d",sum);
	}

	else if(oper=='-') {
		int sub=a-b;
		printf("%d",sub);
	}

	else if(oper=='*') {
		int mult=a*b;
		printf("%d",mult);
	}

	else if(oper=='/') {
		int div=a/b;
		printf("%d",div);
	}

	else if(oper=='%') {
		int mod=a%b;
		printf("%d",mod);
	}

	else
		printf("enter a valid number and operator");

	return 0;
}
