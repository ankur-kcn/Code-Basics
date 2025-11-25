//Check if a given positive integer number is a palindrome or not?

#include<stdio.h>
int main(){
    int n,copy;
    printf("Enter the number: ");
    scanf("%d",&n);
    //reverse
    int rev=0;
    copy=n;
    while(copy>0){
        int dig=copy%10;
        rev=rev*10+dig;
        copy=copy/10;
    }
    if(rev==n){
        printf("It's A Palindrome Number!\n");
    }
    else{
        printf("It's Not A Palindrome Number!\n");
    }
    return 0;
}