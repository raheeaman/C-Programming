#include <stdio.h>
int main() {
    float x,y,result;
    char operator;

    printf("Enter an operator (+,-,*,/):\n");
    scanf(" %c", &operator);
    printf("Enter two numbers: ");
    scanf("%f %f",&x,&y);
 switch (operator) {
        case '+':
            result=x+y;
            printf("Result: %f\n",result);
            break;
        case '-':
            result=x-y;
            printf("Result: %f\n",result);
            break;
        case '*':
            result=x*y;
            printf("Result: %f\n",result);
            break;
        case '/':
            if (y!=0){
                result=x/y;
                printf("Result: %f\n",result);
            } else {
                printf("Error!\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
