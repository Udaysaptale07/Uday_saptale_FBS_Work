//3. Write a program to find greatest of three numbers using nested if-else.

#include<stdio.h>
int main() {
	int no1,no2,no3;

	printf("enter a first number\n");
	scanf("%d",&no1);

	printf("enter a second number\n");
	scanf("%d",&no2);

	printf("enter a third number\n");
	scanf("%d",&no3);

	if(no1 > no2 && no1 > no3) {
		printf("%d is the greatest number", no1);
	} else {
		if(no2 > no3 && no2>no1) {
			printf("%d is the greatest number", no2);
		} else {
			printf("%d is the greatest number", no3);
		}
	}

	return 0;
}



