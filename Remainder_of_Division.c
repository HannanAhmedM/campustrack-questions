#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int dividend;
    int divisor;
    scanf("%d", &dividend);
    scanf("%d", &divisor);

    //===== Declare Local Variables / Functions here if required =====
    int c;

    //===== Write Your Logic Here =====
    c=dividend%divisor;
    printf("%d",c);

    return 0;

}