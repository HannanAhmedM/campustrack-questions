#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    int years, weeks, days;


    //===== Write Your Logic Here =====
years=n/365;
weeks=(n/7)-(years*52);
days=n-(years*365)-(weeks*7);

printf("%d\n%d\n%d",years,weeks,days);

}