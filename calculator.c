#include <stdio.h>
#include <math.h>

// Function declarations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    int choice;
    double num1, num2;

    do {
        printf("\n--- Scientific Calculator ---\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Power (x^y)\n");
        printf("6. Square Root (√x)\n");
        printf("7. Logarithm (log10 x)\n");
        printf("8. Sine (sin x)\n");
        printf("9. Cosine (cos x)\n");
        printf("10. Tangent (tan x)\n");
        printf("11. Exit\n");

        printf("Enter your choice (1-11): ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result = %.4lf", add(num1, num2));
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result = %.4lf", subtract(num1, num2));
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result = %.4lf", multiply(num1, num2));
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0)
                    printf("Result = %.4lf", divide(num1, num2));
                else
                    printf("Error! Division by zero.");
                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result = %.4lf", pow(num1, num2));
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 >= 0)
                    printf("Result = %.4lf", sqrt(num1));
                else
                    printf("Error! Negative number.");
                break;

            case 7:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 > 0)
                    printf("Result = %.4lf", log10(num1));
                else
                    printf("Error! Invalid input.");
                break;

            case 8:
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                printf("Result = %.4lf", sin(num1 * 3.14159265 / 180));
                break;

            case 9:
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                printf("Result = %.4lf", cos(num1 * 3.14159265 / 180));
                break;

            case 10:
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                printf("Result = %.4lf", tan(num1 * 3.14159265 / 180));
                break;

            case 11:
                printf("Thank you for using Scientific Calculator!");
                break;

            default:
                printf("Invalid choice!");
        }

    } while (choice != 11);

    return 0;
}

// Basic operation functions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}