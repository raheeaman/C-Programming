#include<stdio.h>

int evenodd(int a);

int main() {
    int x;
    scanf("%d", &x);
    char result = evenodd(x);
    printf("%c", result);
    return 0;
}

int evenodd(int a) {
    if (a % 2 == 0)
        return 'E'; // 'E' for Even
    else
        return 'O'; // 'O' for Odd
}
