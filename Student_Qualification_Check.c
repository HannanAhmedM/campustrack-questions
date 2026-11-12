#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int M, P;
    scanf("%d", &M);
    scanf("%d", &P);

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
if (((M>35)&&(P>35))||(M+P)>=100)
printf("Qualified");

else printf("Not Qualified");

}