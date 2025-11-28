#include<stdio.h>
int main(){
    int n,d1,d2,d3,d4,d5;
    printf("Enter the 5-digit number: ");
    scanf("%d",&n);
    d5=n%10;
    n=n/10;
    d4=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d1=n%10;
    n=n/10;
    long int revnum=10000*d5+1000*d4+100*d3+10*d2+d1;
    printf("The reverese number is: %ld",revnum);
    return 0;
}