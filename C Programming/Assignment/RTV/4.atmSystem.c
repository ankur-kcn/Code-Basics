// 4. Bank ATM Mini-System (Loops + Functions)
// Features:
// • Menu-driven ATM
// • Withdraw, deposit, balance check
// • Functions for each operation
// • Pointers to modify balance
// Real use: Basic simulation of ATM logic.

#include<stdio.h>
 void display(){
        printf("------ Menu ------\n");
        printf("1. Withdraw\n");
        printf("2. Deposit\n");
        printf("3. Balance Check\n");
        printf("4. Exit\n");
        printf("Choose (1-4):\n");
    }
    void deposit(float *balance){
        float amount;
        printf("Enter the amount to Deposit: ");
        scanf("%f",&amount);
        if(amount<=0){
            printf("Invalid!\n");
            return;
        }
        *balance += amount;
        printf("Updated Balance: %.2f\n",*balance);
    }
    void withdraw(float *balance){
        float amount;
        printf("Enter the amount to Withdraw: ");
        scanf("%f",&amount);
        if(amount<=0){
            printf("Invalid!\n");
            return;
        }
        if(amount > *balance){
        printf("Insufficient Balance to Withdraw!\n");
    }
    *balance -= amount;
    printf("Please collect your Cash: %.2f\n",amount);
    printf("Remaining Balance: %.2f\n",*balance);
}
void balCheck(float *balance){
    printf("Availaible Balance: %.2f\n",*balance);
    }
int main(){
    int choice;
    float balance = 10000.00;
    printf("------------ Bank ATM System ------------\n");
    while(1){
        display();
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        deposit(&balance);
            break;
        case 2:
            withdraw(&balance);
            break;
        case 3:
            balCheck(&balance);
            break;
        case 4:
            printf("Sayonara! Thanks for Using!\n");
            return 0;
        
        default:
        printf("Invalid Choice! Try Again!\n");
            break;
        }
    }
    return 0; 
}