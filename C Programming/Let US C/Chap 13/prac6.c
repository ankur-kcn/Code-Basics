// to search the number present and its count
#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,3,4,5,2,6,47,2,74,7,3,73,7,7,7,7,7,4,44,};
    int size= sizeof(a) / sizeof(a[0]);
    printf("Size of array = %d\n",size);
    int n,i,count=0;
    printf("Enter an element to search: ");
    scanf("%d",&n);
    for(i=0;i<size;i++){
        if(a[i]==n)
        count++;
    }
    printf("Number %d is found %d times!\n",n,count);
    return 0;
}