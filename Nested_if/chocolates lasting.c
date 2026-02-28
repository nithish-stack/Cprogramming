#include <stdio.h>

int main() {
    int total, perDay, days;

    printf("Enter total chocolates: ");
    scanf("%d", &total);

    printf("Enter chocolates per day: ");
    scanf("%d", &perDay);

    printf("Enter planned days: ");
    scanf("%d", &days);

    printf("%d\n", (perDay * days <= total));

    return 0;
}
