#include<stdio.h>
int main() {
	int arr[5];
	int brr[5];
	int crr[5];

	printf("first array\n");
	for(int i=0; i<5; i++) {
		scanf("%d",&arr[i]);
	}

	printf("second array\n");
	for(int i=0; i<5; i++) {
		scanf("%d",&brr[i]);
	}



	for(int i=0; i<5; i++) {
		printf("%d\t",arr[i]);
	}

	printf("\n");

	for(int i=0; i<5; i++) {
		printf("%d\t",brr[i]);
	}
	
	printf("merge array is\n");
	for(int i=0; i<5; i++) {
		printf("%d\t",brr[i]);
	}

	return 0;
}