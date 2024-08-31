#include <stdio.h>

int main(){
    int i,n,sum;
    int x=0;
    int y=1;

    printf("how many terms?:");
    scanf("%d",&n);
    if (n==0){
        printf("0");
        }
        else if (n==1)
            printf("1");

    for(i=2;i<=n;i++){
        sum=x+y;
        x=y;
        y=sum;
        printf("%d",sum);


    }
    return 0;

}
