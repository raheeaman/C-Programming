#include<stdio.h>

int evenodd(int a);

int main() {
    int x;
    scanf("%d", &x);
    evenodd(x);
    return 0;
}

int evenodd(int a) {
        if (a % 2 != 0)
        printf("The number is Odd");
    else{
        if (a==0)
            printf("The number is zero");
        else  printf("The number is Even");
    }

}
