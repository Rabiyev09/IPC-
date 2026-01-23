#include <stdio.h>
#include <math.h>

void showMenu() {
    printf("\n=== SCIENTIFIC CALCULATOR ===\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Square Root\n");
    printf("7. Natural Logarithm (ln)\n");
    printf("8. Base-10 Logarithm (log10)\n");
    printf("9. Trigonometric Functions (sin, cos, tan)\n");
    printf("10. Complex Expression: x^2 + sqrt(y) + log(x + y)\n");
    printf("0. Exit\n");
    printf("=============================\n");
    printf("Enter your choice: ");
}

int main(void) {
    double x, y, result;
    int choice;

    printf("Welcome to the Advanced Scientific Calculator!\n");

    while (1) {
        showMenu();
        scanf("%d", &choice);

        if (choice == 0) {
            printf("\nGoodbye! Have a great day!\n");
            break;
        }

        // For operations that need two numbers
        if ((choice >= 1 && choice <= 5) || choice == 10) {
            printf("Enter first number (x): ");
            scanf("%lf", &x);
            printf("Enter second number (y): ");
            scanf("%lf", &y);
        } 
        // For single-number operations
        else if (choice >= 6 && choice <= 9) {
            printf("Enter a number (x): ");
            scanf("%lf", &x);
        }

        switch (choice) {
            case 1:
                result = x + y;
                printf("Result: %.4f\n", result);
                break;

            case 2:
                result = x - y;
                printf("Result: %.4f\n", result);
                break;

            case 3:
                result = x * y;
                printf("Result: %.4f\n", result);
                break;

            case 4:
                if (y != 0)
                    printf("Result: %.4f\n", x / y);
                else
                    printf("Error: Division by zero!\n");
                break;

            case 5:
                result = pow(x, y);
                printf("Result: %.4f\n", result);
                break;

            case 6:
                if (x >= 0)
                    printf("Result: sqrt(x) = %.4f\n", sqrt(x));
                else
                    printf("Error: Negative number cannot have a real square root.\n");
                break;

            case 7:
                if (x > 0)
                    printf("Result: ln(x) = %.4f\n", log(x));
                else
                    printf("Error: Logarithm undefined for x <= 0.\n");
                break;

            case 8:
                if (x > 0)
                    printf("Result: log10(x) = %.4f\n", log10(x));
                else
                    printf("Error: Logarithm undefined for x <= 0.\n");
                break;

            case 9:
                printf("sin(%.2f) = %.4f\n", x, sin(x));
                printf("cos(%.2f) = %.4f\n", x, cos(x));
                printf("tan(%.2f) = %.4f\n", x, tan(x));
                break;

            case 10:
                if (x + y > 0)
                    result = pow(x, 2) + sqrt(y) + log(x + y);
                else
                    result = pow(x, 2) + sqrt(fabs(y));
                printf("Result: %.4f\n", result);
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

        printf("-----------------------------\n");
    }

    return 0;
}
