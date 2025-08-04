//6 Check the given number is Perfect number or not.
//Input: n = 28
//Output: Perfect

#include <stdio.h>

int main() {
    int num, i, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == num) {
        printf("Perfect\n");
    } else {
        printf("Not Perfect\n");
    }

    return 0;
}
