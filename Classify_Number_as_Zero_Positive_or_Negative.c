#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
    if (n>0)
        printf("Positive");
    if (n<0)
        printf("Negative");
    if (n==0)
        printf("Zero");
    

return 0;
}