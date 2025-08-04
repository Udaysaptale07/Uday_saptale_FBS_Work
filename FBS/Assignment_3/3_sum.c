//3. Sum of numbers in given range.
//Find sum of numbers from start to end.
//Input: start = 1, end = 5
//Output: 15

#include<stdio.h>
int main()
{	
	int i,sum=0, start,end;
	printf("Enter a start number\n");
	scanf("%d",&start);
	
	printf("Enter a end number\n");
	scanf("%d",&end);
	i=start;
	while(i<=end){
		sum=i+sum;
		i++;
	}
	printf("%d\n",sum);
	return 0;
}