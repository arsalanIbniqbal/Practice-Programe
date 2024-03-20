#include <stdio.h>
#include <math.h>

// Function to calculate factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}


// CALCULATOR
int main() {
    int choice;
    double num1, num2;
    double result;
    const float PI = 3.14159265;

    // Loop to continue the program until the user chooses to exit
    do {

        // Display menu
        printf("\nChoose operation:\n");
        printf("1. Press 1 For Addition\n");
        printf("2. Press 2 For Subtraction\n");
        printf("3. Press 3 For Multiplication\n");
        printf("4. Press 4 For Division\n");
        printf("5. Press 5 For Check even or odd\n");
        printf("6. Press 6 For Factorial\n");
        printf("7. Press 7 For Sine\n");
        printf("8. Press 8 For Cosine\n");
        printf("9. Press 9 For Tangent\n");
        printf("10. Exit\n");

       // user's Input choice
        scanf("%d", &choice); 

        // Check user's choice and perform operation

        // For Addition
        if (choice == 1) {
            printf("Enter numbers separated by space: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %lf\n", result);
        }

        // For Subtraction
        else if (choice == 2) {
            printf("Enter numbers separated by space: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %lf\n", result);
        }

        // For Multiplication
        else if (choice == 3) {
            printf("Enter numbers separated by space: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %lf\n", result);
        }
        
        // For Division
        else if (choice == 4) {
            printf("Enter numbers separated by space: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 == 0) {
                printf("Error! Division by zero.\n");
            } else {
                result = num1 / num2;
                printf("Result: %lf\n", result);
            }
        } 

        // For Check Number is Even or Odd
        else if (choice == 5) {
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if ((int)num1 % 2 == 0) {
                printf("Even\n");
            } else {
                printf("Odd\n");
            }
        } 

        // For getting Factorial of num 
        else if (choice == 6) {
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (num1 < 0) {
                printf("Factorial is not defined for negative numbers.\n");
            } else {
                printf("Result: %d\n", factorial((int)num1));
            }
        } 

        // For getting sin value 
        else if (choice == 7) {
            printf("Enter an angle in degrees: ");
            scanf("%lf", &num1);
            result = sin(num1 * PI / 180); // Convert degrees to radians
            printf("Result: %lf\n", result);
        } 
        
        // For getting Cos value 
        else if (choice == 8) {
            printf("Enter an angle in degrees: ");
            scanf("%lf", &num1);
            result = cos(num1 * PI / 180); // Convert degrees to radians
            printf("Result: %lf\n", result);
        } 
        
        // For getting Tan value 
        else if (choice == 9) {
            printf("Enter an angle in degrees: ");
            scanf("%lf", &num1);
            result = tan(num1 * PI / 180); // Convert degrees to radians
            printf("Result: %lf\n", result);
        } 

        else if (choice == 10) {
            printf("Exiting the program...\n");
            return 0; // Exit the program
        }
        
         else {
            printf("Invalid choice\n");
        }
    } 
    
    while (1); // Loop indefinitely until explicitly exited

    return 0;
}
