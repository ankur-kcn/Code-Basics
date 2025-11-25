#include<stdio.h>
int main(){
    int length=1189,breadth=841;
    int temp,i;
    printf("A0: %d x %d\n",length,breadth);
    for(i=1;i<=8;i++){
        temp=length;
        length=breadth;
        breadth=temp/2;
        printf("A%d: %d x %d\n",i,length,breadth);
    }
    return 0;
}