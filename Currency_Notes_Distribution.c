#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int A;
    scanf("%d", &A);

    //===== Declare Local Variables / Functions here if required =====

int f00,f0,ten,one;
    //===== Write Your Logic Here =====
f00=A/500;
f0=(A-(f00*500))/50;
ten=(A-(f0*50)-(f00*500))/10;
one=(A-(ten*10)-(f0*50)-(f00*500));


printf("500: %d 50: %d 10: %d 1: %d",f00,f0,ten,one);

}