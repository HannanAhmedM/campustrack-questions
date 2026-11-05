#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char A[1000];
    char B[1000];
    int N;

    //===== Declare Local Variables / Functions here if required =====

int z,g;
    scanf("%s", A);
    scanf("%s", B);
    scanf("%d", &N);

    //===== Write Your Logic Here =====
for (int i=0;i<N;i++){
    if (A[strlen(A)-1-i]!=B[strlen(B)-1-i]) {g=0; break;}
    else g=1;
}

if (g==1) printf("True");
else printf("False");

}