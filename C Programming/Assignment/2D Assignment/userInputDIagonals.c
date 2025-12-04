#include<stdio.h>
int main(){
    int n;
    printf("Enter the square matrix: ");
    scanf("%d",&n);
    int arr[n][n];
    int orgsum=0;
    int altsum=0;
    printf("Enter the elements in %d X %d  array: \n",n,n);
    for(int i=0;i<n;i++){
        for (int j = 0; j < n; j++)
        {
          scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("The %d X %d matrix is:\n",n,n);
    for(int i=0;i<n;i++){
        for (int j = 0; j < n; j++)
        {
          printf("%d   ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    for(int i=0;i<n;i++){
          orgsum=orgsum+arr[i][i];
          altsum=altsum+arr[i][n-i-1];
    }
    printf("The Original Diagonal Sum: %d\n",orgsum);
    printf("The Alternate Diagonal Sum: %d\n",altsum);

    return 0;
}