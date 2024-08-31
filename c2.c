#include <stdio.h>

int main() {
    int x, y, result;
    char operator;

    printf("Enter an operator (+, -, *, /):\n");
    scanf(" %c", &operator); // Note the space before %c to consume any leading whitespace

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    switch (operator) {
        case '+':
            result = x+y;
            printf("Result: %d\n", result);
            break;
        case '-':
            result = x - y;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = x * y;
            printf("Result: %d\n", result);
            break;
        case '/':
            if (y != 0) {
                result = x / y;
                printf("Result: %d\n", result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
