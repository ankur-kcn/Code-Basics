//Given a positive integer value n (>= 0) display number, square and cube of numbers from 1 to n in a tabular format.
#include<stdio.h>

int main(){
    int n,i;
    printf("Enter the nth term: ");
    scanf("%d",&n);

    if(n<0){
        printf("Enter a non-negative number!\n");
    }

    printf("Number\t|Square\t|Cube\n");
    for(i=1;i<=n;i++){
        printf("%d\t|%d\t|%d\n",i, i*i,i*i*i);
    }

    return 0;
}