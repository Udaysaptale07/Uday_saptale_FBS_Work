#include<stdio.h>
int main() {
	char alph;
	printf("Enter a alphabet\n");
	scanf("%c",&alph);

	if (alph>='A' && alph<='Z') {
		printf("Its a Uppercase");

	} 
	else {5
		if(alph>='a' && alph<='z') {
			printf("Its lowercase");
		} else {
			printf("Enter a valid Alphabet");
		}
	}

	return 0;
}