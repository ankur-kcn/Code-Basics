//copy content of 1 array to another array in reverese order
#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int b[5];
    int i,j;
    printf("The normal array order:\n");
    for(i=0;i<5;i++){
        printf("%d  ",a[i]);
    }
    // the values are getting stored in normal sequence
    // but the array storing it in reverese order
        for(i=0,j=4;i<=4;i++,j--) 
        {
        b[j]=a[i];
        }
    printf("\nThe reverese array order:\n");
    for(i=0;i<5;i++){
        printf("%d  ",b[i]);
    }
    return 0;
}