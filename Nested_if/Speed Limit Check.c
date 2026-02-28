#include <stdio.h>

int main() {
    int limit, speed;

    printf("Enter speed limit and vehicle speed: ");
    scanf("%d %d", &limit, &speed);

    if (speed > limit)
        printf("Warning! Speed Limit Exceeded\n");
    else
        printf("Within Speed Limit\n");

    return 0;
}
