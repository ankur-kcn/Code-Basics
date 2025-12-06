// 7. Inventory Billing System (Loops + Array)
// Features:
// • List of 10 items (price stored in array)
// • Input quantity for each
// • Calculate bill using functions
// • Pointer for array traversal
// Real use: Grocery store billing prototype.

#include<stdio.h>

int main(){
    char name[10][50];
    int qty;
    
    printf("----- List of %d Items -----\n",10);
    for(int i=0;i<10;i++){
        printf("Item %d: ",i+1);
        fgets(name[i],sizeof(name[i]),stdin);
        printf("Quantity : ");
        scanf("%d",&qty);
        getchar();
    }
    return 0;
}