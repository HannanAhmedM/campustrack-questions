#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int x;
    scanf("%d", &x);

    //===== Declare Local Variables / Functions here if required =====

    int y,z;
    //===== Write Your Logic Here =====
    y=x%10;
    z=(x/10)%10;

    printf("%d%d",y,z);
    return 0;

}