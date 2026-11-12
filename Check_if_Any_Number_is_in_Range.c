#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int a, b, c, l, u;

    //===== Declare Local Variables / Functions here if required =====


    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &l);
    scanf("%d", &u);

    //===== Write Your Logic Here =====
if ((a>=l&&a<=u)||(b>=l&&b<=u)||(c>=l&&c<=u)) printf("True");
else printf("False");

}