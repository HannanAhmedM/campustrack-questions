#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char A[100];
    char B[100];
    int I;

    fgets(A, sizeof(A), stdin);
    A[strcspn(A, "\n")] = 0;
    fgets(B, sizeof(B), stdin);
    B[strcspn(B, "\n")] = 0;
    scanf("%d", &I);

    //===== Declare Local Variables / Functions here if required =====
int z;

    //===== Write Your Logic Here =====

if(A[I]==B[0]) z=1;
else z=0;

if (z==1) printf("True");
else printf("False");
}