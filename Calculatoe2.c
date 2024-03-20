#include <stdio.h>
#include <math.h>

#define PI 3.14159265

// Function to calculate factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int choice;
    double num1, num2;
    double result;

    // Loop to continue the program until the user chooses to exit
    do {
        // Display menu to the user
        printf("\nChoose operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Check even or odd\n");
        printf("6. Factorial\n");
        printf("7. Sine\n");
        printf("8. Cosine\n");
        printf("9. Exit\n");

// Read user's choice
        scanf("%d", &choice); 

        switch (choice) {
            // Case 1 For Addition
            case 1:
                printf("Enter numbers separated by space: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result: %lf\n", result);
                break;

            // Case 2 For Subtraction
            case 2:
                printf("Enter numbers separated by space: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result: %lf\n", result);
                break;
            case 3:
                printf("Enter numbers separated by space: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result: %lf\n", result);
                break;
            case 4:
                printf("Enter numbers separated by space: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 == 0) {
                    printf("Error! Division by zero.\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %lf\n", result);
                }
                break;
            case 5:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if ((int)num1 % 2 == 0) {
                    printf("Even\n");
                } else {
                    printf("Odd\n");
                }
                break;
            case 6:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 < 0) {
                    printf("Factorial is not defined for negative numbers.\n");
                } else {
                    printf("Result: %d\n", factorial((int)num1));
                }
                break;
            case 7:
                printf("Enter an angle in degrees: ");
                scanf("%lf", &num1);
                result = sin(num1 * PI / 180); // Convert degrees to radians
                printf("Result: %lf\n", result);
                break;
            case 8:
                printf("Enter an angle in degrees: ");
                scanf("%lf", &num1);
                result = cos(num1 * PI / 180); // Convert degrees to radians
                printf("Result: %lf\n", result);
                break;
            case 9:
                printf("Exiting the program...\n");
                return 0; // Exit the program
            default:
                printf("Invalid choice\n");
        }

    }

// Loop indefinitely until explicitly exited
 while (1); 

    return 0;
}
