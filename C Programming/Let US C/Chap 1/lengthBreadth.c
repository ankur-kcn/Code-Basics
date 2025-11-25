#include<stdio.h>
int main(){
    int len,bre,r;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d%d",&len,&bre);
    printf("Enter the radius of the circle: ");
    scanf("%d",&r);
    //area of rectangle
    int areaRec=len*bre;
    //perimeter of rectangle
    int peri=2*(len+bre);
    //area of circle
    int areaCir= 3.14*r*r;
    //circumference of circle
    int circum= 2*3.14*r;
    printf("The area of rectangle: %d\n",areaRec);
    printf("The perimeter of rectangle: %d\n",peri);
    printf("The area of circle: %d\n",areaCir);
    printf("The circumferece of circle: %d\n",circum);
    return 0;
}