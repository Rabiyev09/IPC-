#include <stdio.h>

int main(void) {
    int dayOfWeek = 0;

    printf("Enter a number (1-7): ");
    scanf("%d", &dayOfWeek);


    if (dayOfWeek == 1) {
        printf("It is Monday\n");
    }
    else if (dayOfWeek == 2) {
        printf("It is Tuesday\n");
    }
    else if (dayOfWeek == 3) {
        printf("It is Wednesday\n");
    }
    else if (dayOfWeek == 4) {
        printf("It is Thursday\n");
    }
    else if (dayOfWeek == 5) {
        printf("It is Friday\n");
    }
    else if (dayOfWeek == 6) {
        printf("It is Saturday\n");
    }
    else if (dayOfWeek == 7) {
        printf("It is Sunday\n");
    }
    else {
        printf("Please enter a number (1-7)\n");
    }

    return 0;
}

