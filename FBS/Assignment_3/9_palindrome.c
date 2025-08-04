#include <stdio.h>

int main() {
    int num, temp, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; 

    while(temp > 0) {
        rem = temp % 10;        
        temp = temp / 10;
		rev = rev * 10 + rem;           
    }

    if(rev == num) {
        printf("It is a Palindrome number\n");
    } else {
        printf("It is not a Palindrome number\n");
    }

    return 0;
}
