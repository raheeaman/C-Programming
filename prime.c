#include <stdio.h>
int main(){
    int i,x;
    printf("Enter a number:\n");
    scanf("%d",&x);
    for (i=2;i<x;i++){
        if (x%i!=0){
            printf("Prime");
            }

        else printf("not prime");
        break;

    }


}
