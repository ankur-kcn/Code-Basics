#include<stdio.h>
int main(){
    // int i=54;
    float a=3.14;
    float *b;
    b=&a;
    // char *ii, *aa;
    // ii = &i;
    // aa = &a;
    // printf("%p\n",ii);
    // printf("%p\n",aa);
    printf("%d\n",*b);
    // printf("%d\n",*aa);
    return 0;
}