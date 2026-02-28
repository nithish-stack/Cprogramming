#include <stdio.h>

int main() {
    float runs, overs, runrate, percentage;

    printf("Enter total runs and overs: ");
    scanf("%f %f", &runs, &overs);

    runrate = runs / overs;
    percentage = runrate;   // simple assumption

    printf("Percentage = %.2f\n", percentage);

    if (percentage < 50)
        printf("Opponent team can win\n");
    else if (percentage == 50)
        printf("Equal chance of winning\n");
    else
        printf("Batting team can win\n");

    return 0;
}
