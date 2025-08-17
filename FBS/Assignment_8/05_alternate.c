#include<stdio.h>
int main(){
	int arr[5];
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<5;i++){
		printf("%d\t",arr[i]);
	}
	
	printf("\n\nAlternate number\n");
	for(int i=0;i<5;i++){
		if(i%2==0){
			printf("%d\t",arr[i]);
		}
	}
	return 0;
}
