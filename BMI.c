#include <stdio.h>
int main(){
    float x,y,BMI;
    printf("weight(kg):");
    scanf("%f",&x);
    printf("height(m):");
    scanf("%f",&y);

    BMI=x/(y*y);
    printf("BMI is %f\n",BMI);

    if(BMI>=18.5 && BMI<=24.9){
        printf("Normal");}
    else if (BMI>=25 && BMI<=29.9){
        printf("Overweight");
        }
    else if (BMI>=30 && BMI<=39.9){
        printf("Obese");
    }
    else printf("Morbidly Obese");
    }
