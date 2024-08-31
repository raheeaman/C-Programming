#include <stdio.h>

int main() {
    int i, n, sum;
    int x = 0;
    int y = 1;

    printf("Enter the term: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        sum = x + y;
        x = y;
        y = sum;
        printf("%d",sum);
    }

    return 0;
}
