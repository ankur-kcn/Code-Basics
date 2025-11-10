//     $
//    $$
//   $$$
//  $$$$
// $$$$$

#include<stdio.h>

int main(){

    int n;
    printf("Enter the nth term: ");
    scanf("%d",&n);

    if(n<0){
        printf("Invalid! Enter a positive integer!\n");
        return 0; 
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}