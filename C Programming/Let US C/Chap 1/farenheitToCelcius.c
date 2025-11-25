#include<stdio.h>
int main(){
    int temp;
    printf("Enter the temperature(in Farenheit): ");
    scanf("%d",&temp);
    int celcius=(temp-32)/1.8;
    printf("The temperature(in Celcius): %d\n",celcius);
    return 0;
}