#include <stdio.h>

int main() {
    float rate1, rate2;

    printf("Enter Success Rate of Agent 1: ");
    scanf("%f", &rate1);

    printf("Enter Success Rate of Agent 2: ");
    scanf("%f", &rate2);

    if (rate1 > rate2)
        printf("Agent 1 has Highest Priority\n");
    else if (rate2 > rate1)
        printf("Agent 2 has Highest Priority\n");
    else
        printf("Both Agents have Equal Priority\n");

    return 0;
}
