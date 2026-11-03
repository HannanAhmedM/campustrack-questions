#include <stdio.h>
#include <stdbool.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    double a, b;

    //===== Declare Local Variables / Functions here if required =====


    scanf("%lf", &a);
    scanf("%lf", &b);

    //===== Write Your Logic Here =====
    if (a>=b)
        printf("True");
    else printf("False");

    return 0;

}