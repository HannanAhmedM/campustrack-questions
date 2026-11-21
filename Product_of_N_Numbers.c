#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int N;
    scanf("%d", &N);

    //===== Declare Local Variables / Functions here if required =====


    int product = 1;


    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);

        //===== Write Your Logic Here =====
product*=num;


    }

    //===== Write Your Logic Here =====
printf("%d",product);

}