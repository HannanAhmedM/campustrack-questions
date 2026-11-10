#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int num;
    scanf("%d", &num);

    //===== Declare Local Variables / Functions here if required =====

    int a,b,c;
    //===== Write Your Logic Here =====
    a=num/100;
    b=num/10%10;
    c=num%10;

    if ((a>4||b>4||c>4)||(a==5)) printf("True");

    else printf("False");

}