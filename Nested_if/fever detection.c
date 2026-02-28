#include <stdio.h>

int main() {
    float temp;

    printf("Enter Body Temperature (°C): ");
    scanf("%f", &temp);

    if (temp >= 37)
        printf("You have a Fever.\n");
    else
        printf("You do not have a Fever.\n");

    return 0;
}
