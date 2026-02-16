#include <stdio.h>

int main() {
    int num, i, flag = 1;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num <= 1)
        flag = 0;
    else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
