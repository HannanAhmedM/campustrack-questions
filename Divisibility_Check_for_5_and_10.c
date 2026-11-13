#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
    if(n%10==0) printf("Divisible by 10");
    else if (n%5==0&&n%10!=0) printf("Divisible by 5");
    else printf("Not Divisible by 10 or 5");

}