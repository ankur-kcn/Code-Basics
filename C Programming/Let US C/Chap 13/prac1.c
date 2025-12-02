//call by reference in array
#include<stdio.h>
void display(int *n){
    printf("%d\n",*n);
}
int main(){
    int i;
    int marks[]={10,20,30,40,50};
    for(i=0;i<5;i++){
        display(&marks[i]);
    }
    return 0;
}