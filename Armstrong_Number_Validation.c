#include <stdio.h>
#include <stdbool.h>

//===== Declare Imports here if required =====
#include <math.h>

//===== Declare Global Variables / Functions here if required =====


int main() {
    int N;
    scanf("%d", &N);

    //===== Declare Local Variables / Functions here if required =====


    int originalN = N;
    int digit1 = N / 100;
    N %= 100;
    int digit2 = N / 10;
    int digit3 = N % 10;
    int sum = 0;
    bool isArmstrong = false;



    //===== Write Your Logic Here =====
if((pow(digit1,3)+pow(digit2,3)+pow(digit3,3)==originalN)) printf("True");
else printf("False");

}