#include <stdio.h>

int main() {
    int choice;

    printf("1. Dairy Milk\n2. KitKat\n3. Snickers\n4. Silk\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Dairy Milk Selected\n"); break;
        case 2: printf("KitKat Selected\n"); break;
        case 3: printf("Snickers Selected\n"); break;
        case 4: printf("Silk Selected\n"); break;
        default: printf("Invalid Choice\n");
    }

    return 0;
}
