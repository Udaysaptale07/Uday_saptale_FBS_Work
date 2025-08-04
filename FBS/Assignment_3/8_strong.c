//8 Check the given number is Strong number or not.
//Input: n = 145
//Output: Strong

#include <stdio.h>

int main() {
    int num, temp, rem, i, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        rem = temp % 10;
        fact = 1;

        for (i = 1; i <= rem; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == num) {
        printf("Strong\n");
    } else {
        printf("Not Strong\n");
    }

    return 0;
}
