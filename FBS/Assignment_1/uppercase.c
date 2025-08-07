#include<stdio.h>
int main()
char alph;
{
	printf("Enter a alphabet");
	scanf("&ch",&alph);
	
	if (alph>='A' || alph<='Z')
	printf("Its uppercase");
	
	else
		printf("Lowercase");
		
		return 0;

}

