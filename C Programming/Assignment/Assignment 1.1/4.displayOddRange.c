//Given an input positive integer number, display odd numbers from in the range [1, n].

#include<stdio.h>

int main(){
    int n,i;
    printf("Enter the nth term: ");
    scanf("%d",&n);

    if(n<0){
        printf("Invalid! Enter a positive integer!\n");
    }

    printf("---- Odd Numbers ----\n");
    for(i=1;i<=n;i++){
        if(i%2!=0){
            printf("%d ",i);
        }
    }
        return 0;
}