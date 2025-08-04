#include<stdio.h>
int main(){
	int num,fd,ld;
	printf("Enter a number\n");
	scanf("%d",&num);
	ld=num%10;
	
	while(num>0){
		fd=num%10;
		num=num/10;
	}
	int sum=fd+ld;
	printf("%d",sum);
	
	return 0;
}