#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int m, p, c;

    scanf("%d", &m);
    scanf("%d", &p);
    scanf("%d", &c);

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
if ((m>=70&&p>=60&&c>=60)||(m+p+c>=180)) printf("True");
else printf("False");

}