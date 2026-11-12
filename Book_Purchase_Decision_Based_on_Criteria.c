#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char S[100];
    int C;
    scanf("%s", S);
    scanf("%d", &C);

    //===== Declare Local Variables / Functions here if required =====
    int z;

    //===== Write Your Logic Here =====
    if (strcmp(S,"large")==0) z=1;
    else z=0;

    if (z==1||C>=300)
    printf("Buy a Book");

    else printf("Do Not Buy a Book");

}