#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
    if ((a<60)&&(b>80))
        {printf("True");
        }
    else if ((b<60)&&(a>80))
        {printf("True");
        }

    else printf("False");

}