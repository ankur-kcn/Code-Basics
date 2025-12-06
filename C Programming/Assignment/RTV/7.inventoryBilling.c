// 7. Inventory Billing System (Loops + Array)
// Features:
// • List of 10 items (price stored in array)
// • Input quantity for each
// • Calculate bill using functions
// • Pointer for array traversal
// Real use: Grocery store billing prototype.

#include<stdio.h>
#define items 10
float calCost(float *p,int *q){
    return (*p)*(*q);
}
float calTotal(float *p,int *q,int n){
    float sum=0;
    for(int i=0;i<items;i++){
        sum+= *(p+i) * *(q+i);
    }
    return sum;
}
int main(){
    float price[items];
    int qty[items];
    
    printf("----- List of %d Items -----\n",items);
    for(int i=0;i<items;i++){
        printf("Item %d: ₹",i+1);
        scanf("%f",&price[i]);
        printf("Quantity : ");
        scanf("%d",&qty[i]);
    }
    printf("\n---------- Inventory Billing ----------\n");
    printf("Item\t | Quantity \t| Cost \n");
    for(int i=0;i<10;i++){
        float cost=calCost(&price[i],&qty[i]);
        printf("%d. ₹%.2f\t%d\t%.2f\n",i+1,price[i],qty[i],cost);
    }
    float Sum=0;
        Sum=calTotal(price,qty,items);
    printf("----------------------------------------\n");
    printf("Total Billing Amount : %.2f\n",Sum);
    printf("----------------------------------------\n");
    return 0;
}