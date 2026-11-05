#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    //===== Declare Local Variables / Functions here if required =====

    int x,z;
    //===== Write Your Logic Here =====
    x=a/100;
    z=b%10;
    
    if(x<z) printf("True");
    else printf("False");

}