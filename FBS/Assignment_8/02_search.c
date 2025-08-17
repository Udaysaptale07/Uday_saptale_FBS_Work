#include<stdio.h>
int main(){
	int arr[5],num,found=0;
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<5;i++){
		printf("%d\t",arr[i]);
	}
	
	printf("\nEnter a number\n");
	scanf("%d",&num);
	
	for(int i=0;i<5;i++){
		if(arr[i]==num){
		printf("num is present at%d",i+1);
		found=1;
		break;
		}
	}
	if(found==0){
		printf("Number is not in this list");
	}
	return 0;
}