#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    int digit1 = n / 10;
    int digit2 = n % 10;
    int sum = digit1 + digit2;

    //===== Write Your Logic Here =====
    if ((sum==7)||(digit1==7)||(digit2==7)||(n%7==0))
        printf("Special Number");

    else printf("Normal Number");

}