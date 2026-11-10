#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int input_number;
    scanf("%d", &input_number);

    //===== Declare Local Variables / Functions here if required =====

int x,y,z;
    //===== Write Your Logic Here =====
    x=input_number/100;
    y=input_number/10%10;
    z=input_number%10;
    if((x==y)&&(y==z)) printf("True");
    else printf("False");

}