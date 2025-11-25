//Compute the sum of a sequence of numbers entered using sentinel controlled repetition?
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the digits: ");
    scanf("%d",&n);
    
    while(n!=-1){
        sum=sum+n;
        scanf("%d",&n);
    }
    printf("The Sum is: %d\n",sum);
    return 0;
}