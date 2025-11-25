// Compute character grade from the marks (0 ≤ marks ≤ 100) of a subject. 
// Grading Scheme: 80-100 : A, 60 - 79: B, 50 - 59: C, 40-49: D, 0-39: F? 
// Solve this using both else-if ladder and switch case?

#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks(0 ≤ marks ≤ 100): ");
    scanf("%d",&marks);
    //else-if 
    printf("====== Evaluated Using ELSE-IF ======\n");
    if(marks>=80 && marks<=100){
        printf("A\n");
    }
    else if(marks>=60 && marks <=79){
        printf("B\n");
    }
    else if(marks>=50 && marks<=59){
        printf("C\n");
    }
    else if(marks>=40 && marks<=49){
        printf("D\n");
    }
    else if(marks>=0 && marks<=39){
        printf("F\n");
    }

    printf("====== Evaluated Using SWITCH CASE ======\n");
    int choice;
    return 0;
}