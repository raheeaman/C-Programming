#include <stdio.h>
int main(){
    float a,result;
    printf("Guess any positive number\n");
    printf("take a number from the computer:\n");
    printf("double the number and add it to your guessed number\n");
    printf("divide the result by 2\n");
    printf("subtract the number you took from the computer\n");
    printf("add 5 to the result\n");
    printf("what's the result?:\n");
    scanf("%f",&a);

    result=((a-5)*2);

    printf("your guessed number is: %f",result);

    return 0;


}
