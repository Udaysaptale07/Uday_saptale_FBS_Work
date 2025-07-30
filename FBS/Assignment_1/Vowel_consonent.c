#include<stdio.h>
int main() {
	char cha;
	printf("enter a charcter:-");
	scanf("%c",&cha);

	if(cha>='a'&& cha<='z' || cha>='A' && cha<='Z') {
		if(cha=='a' || cha=='e' || cha=='i' || cha=='o' || cha=='u' || cha=='A' || cha=='E' || cha=='I' || cha=='O' || cha=='U') {
			printf("It is vowel");
		}

		else {
			printf("Its is consonent");
		} 
	}
	else
	{	
			printf("Its not alphabet");
		}

return 0;
}