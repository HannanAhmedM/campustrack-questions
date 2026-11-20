#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    int sum = 0;

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);

        //===== Write Your Logic Here =====
    sum+=num;

    }

    //===== Write Your Logic Here =====
    printf("%d",sum);

}