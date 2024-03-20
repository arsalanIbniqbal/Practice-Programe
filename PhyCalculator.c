#include <stdio.h>
#include <math.h>

// Function to calculate velocity
double calculateVelocity(double initial_velocity, double acceleration, double time) {
    return initial_velocity + acceleration * time;
}

// Function to calculate acceleration
double calculateAcceleration(double initial_velocity, double final_velocity, double time) {
    return (final_velocity - initial_velocity) / time;
}

// Function to calculate force
double calculateForce(double mass, double acceleration) {
    return mass * acceleration;
}

// Function to calculate work
double calculateWork(double force, double distance) {
    return force * distance;
}

// Function to calculate power
double calculatePower(double work, double time) {
    return work / time;
}

int main() {
    int choice;
    double initial_velocity, 
           final_velocity,
           acceleration, 
           distance, 
           time, 
           power;
           work, 
           mass, 
           force, 

    char again;

    do {
        // Display menu to the user
        printf("\nChoose operation:\n");
        printf("1. Press 1 For Calculate Velocity\n");
        printf("2. Press 2 For Calculate Acceleration\n");
        printf("3. Press 3 For Calculate Force\n");
        printf("4. Press 4 For Calculate Work\n");
        printf("5. Press 5 For Calculate Power\n");

        scanf("%d", &choice);

        // calculate velocity:
        if (choice == 1) {
            printf("Enter initial velocity, acceleration, and time Separated by space: ");
            scanf("%lf %lf %lf", &initial_velocity, &acceleration, &time);
            printf("Velocity: %.2lf m/s\n", calculateVelocity(initial_velocity, acceleration, time));
        }
        
        // calculate acceleration:
         else if (choice == 2) {
            printf("Enter initial velocity, final velocity, and time Separated by space: ");
            scanf("%lf %lf %lf", &initial_velocity, &final_velocity, &time);
            printf("Acceleration: %.2lf m/s^2\n", calculateAcceleration(initial_velocity, final_velocity, time));
        }

        // calculate force:
         else if (choice == 3) {
            printf("Enter mass and acceleration Separated by space: ");
            scanf("%lf %lf", &mass, &acceleration);
            printf("Force: %.2lf N\n", calculateForce(mass, acceleration));
        }

        // calculate work:
         else if (choice == 4) {
            printf("Enter force and distance Separated by space: ");
            scanf("%lf %lf", &force, &distance);
            printf("Work: %.2lf J\n", calculateWork(force, distance));
        }

        // calculate power:
         else if (choice == 5) {
            printf("Enter work and time Separated by space: ");
            scanf("%lf %lf", &work, &time);
            printf("Power: %.2lf W\n", calculatePower(work, time));
        }
        
         else {
            printf("Invalid choice\n");
        }

        // Ask user if they want to perform another calculation
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &again); // Note the space before %c to consume the newline character
    } while (again == 'y' || again == 'Y');

    return 0;
}
