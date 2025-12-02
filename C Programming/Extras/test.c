#include<stdio.h>
int main(){
    int i=54;
    float a=3.14;
    char *ii, *aa;
    ii = &i;
    aa = &a;
    printf("%p\n",ii);
    printf("%p\n",aa);
    printf("%d\n",*ii);
    printf("%d\n",*aa);
    return 0;
}