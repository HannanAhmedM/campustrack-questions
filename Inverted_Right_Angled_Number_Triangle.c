#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int N;
    scanf("%d", &N);

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
for (int i=N;i>0;i--){
    for (int j=1;j<=i;j++){
        printf("%d",i);
        if (j<i) printf(" ");
    }
    printf("\n");
}

}