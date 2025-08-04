//2.Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene.

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a 1st side of the trinagle\n");
	scanf("%d",&a);

	printf("Enter a 2nd side of the triangle\n");
	scanf("%d",&b);

	printf("enter a 3rd side of the triangle\n");
	scanf("%d",&c);
	
	if(a==b && b==c)
		printf("It is equilateral triangle");
		
	else if(a==b || b==c || a==c)
		printf("It is a isosceles triangle");
		
	else	
		printf("It is a scalene triangle");
		
	return 0;		
}