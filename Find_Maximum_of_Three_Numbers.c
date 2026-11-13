#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    //===== Declare Local Variables / Functions here if required =====

    int max,min;
    //===== Write Your Logic Here =====
max=a;
if (b>max) max=b;
if (c>max) max=c;
printf("%d",max);

}