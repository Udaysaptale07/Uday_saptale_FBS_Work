#include<stdio.h>
int main(){
	long long num,fact=1;
	printf("Enter a number\n");
	scanf("%lld",&num);
	
	while(num>0){
		fact=fact*num;
		num--;
	}
	printf("%lld",fact);
	return 0; 
	
}
