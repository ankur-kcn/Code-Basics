#include<stdio.h>

void areapi(int r,float *a,float *p){
    *a=3.14*r*r;
    *p=2 * 3.14 * r;
}
int main(){
    int radius;
    float area, perimeter;
    printf("Enter the radius: \n");
    scanf("%d",&radius);
    areapi(radius,&area,&perimeter);
    printf("Area = %.2f\n",area);
    printf("Perimeter = %.2f\n",perimeter);
    return 0;
}