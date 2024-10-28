#include <stdio.h>

void add(double a, double b) {
    printf("Result: %.2f ", a + b);
}

void subtract(double a, double b) {
    printf("Result: %.2f ", a - b);
}

void multiply(double a, double b) {
    printf("Result: %.2f ", a * b);
}

void divide(double a, double b) {
    if (b != 0) {
        printf("Result: %.2f ", a / b);
    } else {
        printf("Error: Division by 0! ");
    }
}

int main() {
    int choice;
    double num1, num2;

    while (1) {
        printf("Choose the action: ");
        printf("1. Addition ");
        printf("2. Subtraction ");
        printf("3. Multiplication ");
        printf("4. Division ");
        printf("5. Exit ");
        printf("Choose the number: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exit the program.");
            break;
        }

        printf("Entr 2 numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (choice) {
            case 1:
                add(num1, num2);
                break;
            case 2:
                subtract(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                divide(num1, num2);
                break;
            default:
                printf("Error: Wrong choice of action.");
                break;
        }
    }

    return 0;
}