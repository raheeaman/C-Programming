
#include <stdio.h>

int main() {
   int x;
   printf("select an option\n 1 \n 2 \n 3 \n:");
   scanf("%d",&x);
    int engineering=x; // For example, let's say we're selecting "Theory"

    switch (engineering) {
        case 1:
            printf("lab\n");
            break;
        case 2:
            printf("Theory\n");
            break;
        case 3:
            printf("Assignment\n");
            break;
        default:
            printf("Invalid option\n");
            break;
    }

    return 0;
}
