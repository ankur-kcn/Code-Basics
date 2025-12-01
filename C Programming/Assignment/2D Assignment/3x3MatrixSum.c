#include<stdio.h>
int main(){
    int arr[3][3];
    int sum=0;
    printf("Enter the elements in 3x3 array: \n");
    for(int i=0;i<3;i++){
        for (int j = 0; j < 3; j++)
        {
          scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("The 3x3 matrix is:\n");
    for(int i=0;i<3;i++){
        for (int j = 0; j < 3; j++)
        {
          printf("%d   ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<3;i++){
        for (int j = 0; j < 3; j++)
        {
            sum=sum+arr[i][j];
        }
        printf("Sum of Row %d = %d \n",i+1,sum);
        
    }
    return 0;
}