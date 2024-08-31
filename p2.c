#include<stdio.h>
int main(){
int cls [20];

for (int i=0;i<20;i++){


            printf("Enter the amount of roll %d:",i+1);
            scanf("%d",&cls[i]);
              if (cls[i]<25){
                printf("Donate more:");
                scanf("%d",&cls[i]);
            }



            }
int sum=0;
for (int i=0;i<20;i++){
        sum=sum+cls[i];

}
printf("Total amount:%d\n",sum);
for (int i=0;i<20;i++){
    printf("Roll %d gave %d taka\n",i+1,cls[i]);
}
if (sum>500){
         printf("extra fund %d",sum-500);

}



return 0;
}
