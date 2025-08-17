#include<stdio.h>
int main(){
	int arr[5],sum=0;
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<5;i++){
		printf("%d\t",arr[i]);
	}
	
	for(int i=0;i<5;i++){
		sum=sum+arr[i];
	}
	printf("\nsum of number is %d",sum);
	return 0;
	
}