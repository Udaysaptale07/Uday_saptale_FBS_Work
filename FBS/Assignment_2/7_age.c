//7. Accept the age and check if the person is:
//Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)

#include<stdio.h>
int main()
{
	int age;
	printf("Enter a age\n");
	scanf("%d",&age);
	
	if(age<12){
		printf("child");
	}
	else if(age>=12 && age<=19){
		printf("Teenager");
	}
	
	else if(age>=20 && age<=59){
		printf("adult");
	}
	
	else{
		printf("senior");
	}
	return 0;
	
}