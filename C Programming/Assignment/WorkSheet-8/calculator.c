#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if(b == 0) {
        printf("Division by Zero! Not Possible!\n");
        return 0.0;
    }
    return (float)a / b;
}

int main() {
    int num1, num2,choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\n====Calculator Menu====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Addition = %d\n", add(num1, num2));
            break;
        case 2:
            printf("Subtraction = %d\n", subtract(num1, num2));
            break;
        case 3:
            printf("Multiplication = %d\n", multiply(num1, num2));
            break;
        case 4:
            printf("Division = %.2f\n", divide(num1, num2));
            break;
        default:
            printf("Invalid choice!");
    }

    return 0;
}
