#include<stdio.h>

int main(){

    int n=5;
    // printf("Enter the nth term: ");
    // scanf("%d",&n);

    // if(n<0){
    //     printf("Invalid! Enter a positive integer!\n");
    //     return 0;
    // }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}