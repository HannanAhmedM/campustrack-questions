#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    //===== Declare Local Variables / Functions here if required =====

    int i,j;
    //===== Write Your Logic Here =====
    for (i=0;i<=M-1;i++){
        for (j=0;j<=N-1;j++){
            printf("* ");
        }
        printf("\n");
    }

}