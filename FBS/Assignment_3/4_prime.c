//Check the given number is prime or not.

#include<stdio.h>
int main(){
	int num,status,i=2;
	
	printf("Enter a number\n");
	scanf("%d",&num);
	
	while(i<num){
		if(num%i==0)
		status=1;
		i++;
	}
	if(status==1){
		printf("Its not prime number");
	}
	else{
		printf("Its prime number");
	}
	return 0;
}