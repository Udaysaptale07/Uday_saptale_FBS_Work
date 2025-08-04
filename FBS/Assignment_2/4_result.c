//4. Ask the user to enter marks.
//Then show the result based on these rules:
//If marks are more than 75 ? show "Distinction"
//If marks are more than 65 ? show "First Class"
//If marks are more than 55 ? show "Second Class"
//If marks are 40 or more ? show "Pass Class"
//If marks are less than 40 ? show "Fail"

#include<stdio.h>
int main() {
	int marks;
	printf("Enter a marks\n");
	scanf("%d",&marks);

	if(marks>75)
		printf("result=Distinction");

	else {
		if(marks>65)
			printf("result=First class");

		else {
			if(marks>55)
				printf("result=second class");

			else {
				if(marks>40)
					printf("result=Pass class");

				else {
						printf("result=fail");
						
				}

			}
		}
	return 0;
}
}