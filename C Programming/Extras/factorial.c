#include<stdio.h>
int factorial(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int n;
    printf("Enter the number to find the factorial: ");
    scanf("%d",&n);
    int f=factorial(n);
    printf("The factorial is: %d\n",f);
    return 0;
}
