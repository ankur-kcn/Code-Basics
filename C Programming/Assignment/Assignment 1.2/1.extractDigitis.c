//Extract digits of an integer number (left to right and right to left)?

#include <stdio.h>
int main()
{
    int n,org;
    printf("Enter the number: ");
    scanf("%d", &n);
    org=n;

    //right to left
    printf("Right to Left: \n");
        while (n > 0)
        {
            int dig = n % 10;
            printf("%d\n", dig);
            n = n / 10;
        }
        
        //left to right
        printf("Left to Right: \n");
        int copy=org;
        int div=1;
        while(copy>=10){
            copy=copy/10; // removes the last one
            div=div*10; // increases the divisor as the digit count increses
        }

        n=org;

        while(div>0){
            int digit=n/div; // extract the left digit
            printf("%d\n",digit);
            n=n%div;  // remove the left digit and give the rest number
            div=div/10; //decrese the divisior with repect tot the number of digits available
        }
        
        //left to right
                // int temp=a;
                // int rev=0;
                // while(temp>0){
                //     int dig=temp%10; // last digit extraction
                //     rev=rev*10+dig; // adding the dig to create the reversed number
                //     temp=temp/10; // remove the last digit
                // }
                // while (rev > 0)
                // {
                //     int digi = rev % 10;
                //     printf("%d \n", digi);
                //     rev = rev / 10;
                // }
    return 0;
}