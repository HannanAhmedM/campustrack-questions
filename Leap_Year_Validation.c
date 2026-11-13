#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int year;
    scanf("%d", &year);

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
if (year%4==0&&(year/100)%4==0) printf("True");
else printf("False");

}