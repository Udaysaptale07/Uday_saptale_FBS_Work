#include<stdio.h>
int main(){
	int arr[10],max,min;
	
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
	
	max=arr[0];
	for(int i=0;i<10;i++){
		if(arr[i]>max)
	max=arr[i];
	}
	
	min=arr[0];
	for(int i=0;i<10;i++){
		if(arr[i]<min)
		min=arr[i];
	}
	
	
	printf("\nmaximum number is %d",max);
	printf("\nminimum number is %d",min);
	
	return 0;
	
	
}