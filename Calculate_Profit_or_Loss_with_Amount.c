#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int s, b;
    scanf("%d", &s);
    scanf("%d", &b);

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
if (s>b){ printf("Profit "); printf("%d",s-b);}
else if (b>s){ printf("Loss ");printf("%d",b-s);}
else printf("No Profit No Loss");

}