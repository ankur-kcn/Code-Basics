#include<stdio.h>
int main(){
    double arr[5];
    printf("Enter the 5 elements: ");
    for(int i=0;i<5;i++){
        scanf("%lf",&arr[i]);
    }
    double sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    printf("The Sum is: %.2lf\n",sum);
    return 0;
}