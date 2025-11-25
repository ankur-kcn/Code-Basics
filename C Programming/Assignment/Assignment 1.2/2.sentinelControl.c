// Given a sequence of digits form the number composed of the digits. Use sentinel
// controlled repetition to read the digits followed by -1. For example, for the input 2 7 3
// 2 9 -1 the output number is 27329?

#include <stdio.h>
int main(){
    int n,num=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    while(n!=-1){
        num=num*10+n;
        scanf("%d",&n);
    }
    printf("The Number is: %d\n",num);
}