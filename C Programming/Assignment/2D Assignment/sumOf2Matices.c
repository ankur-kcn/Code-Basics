#include<stdio.h>
int main(){
    int a[3][3];
    int b[3][3];
    int sum[3][3];
    
    //1st array input
    printf("Enter the elements in 1st 3x3 array: \n");
    for(int i=0;i<3;i++){
        for (int j = 0; j < 3; j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
    //2nd array input
    printf("Enter the elements in 1st 3x3 array: \n");
    for(int i=0;i<3;i++){
        for (int j = 0; j < 3; j++)
        {
          scanf("%d",&b[i][j]);
        }
    }
    //1st array output
    printf("\n");
    printf("The 1st 3x3 matrix is:\n");
    for(int i=0;i<3;i++){
        for (int j = 0; j < 3; j++)
        {
          printf("%d   ",a[i][j]);
        }
        printf("\n");
    }
    //2nd array output
    printf("\n");
    printf("The 2nd 3x3 matrix is:\n");
    for(int i=0;i<3;i++){
        for (int j = 0; j < 3; j++)
        {
          printf("%d   ",b[i][j]);
        }
        printf("\n");
    }
    //adding matrices
    for(int i=0;i<3;i++){
        for (int j = 0; j < 3; j++)
        {
          sum[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("\n");
    printf("Sum of two matrices:\n");
    for(int i=0;i<3;i++){
        for (int j = 0; j < 3; j++)
        {
          printf("%d   ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}