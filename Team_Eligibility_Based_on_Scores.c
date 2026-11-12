#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    //===== Declare Local Variables / Functions here if required =====

int z=a+b;
    //===== Write Your Logic Here =====
if(((a>300||b>300)&&(z)<500))
printf("Can team up");

else printf("Cannot team up");

}