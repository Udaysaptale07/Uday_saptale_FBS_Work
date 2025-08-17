#include<stdio.h>
int main() {
	int arr[5];
	for(int i=0; i<5; i++) {
		scanf("%d",&arr[i]);
	}

	for(int i=0; i<5; i++) {
		printf("%d\t",arr[i]);
	}
	
	printf("\n");

	printf("\nprime numbers is");
	for(int i=0; i<5; i++) {
		int status=0;

		if(arr[i]<2) {
			status=1;
		}
		else

			{
				for(int j=2; j<arr[i]; j++) {
					if(arr[i]%j==0){
						status=1;
					break;
					}
				}
			}
		if(status==0)
			printf("\n%d\t",arr[i]);
	}

	return 0;

}