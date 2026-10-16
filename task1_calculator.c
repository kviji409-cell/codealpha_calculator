#include <stdio.h>

int main(void) {
    double num1, num2;
    char operator;

    printf("=== Basic Calculator ===\\n");
    printf("Enter an expression (example: 12 + 4): ");

    if (scanf("%lf %c %lf", &num1, &operator, &num2) != 3) {
        printf("Invalid input. Please enter: number operator number\\n");
        return 1;
    }

    switch (operator) {
        case '+':
            printf("Result: %.2f\\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2f\\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2f\\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\\n");
                return 1;
            }
            printf("Result: %.2f\\n", num1 / num2);
            break;
        default:
            printf("Invalid operator. Use +, -, * or /.\\n");
            return 1;
    }

    return 0;
}
