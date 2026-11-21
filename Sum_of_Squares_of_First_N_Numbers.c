#include <stdio.h>

//===== Declare Imports here if required =====
#include <math.h>

//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====

    int i;
    int sum_of_squares = 0;

    //===== Write Your Logic Here =====
for (i=0;i<=n;i++){
    sum_of_squares+=pow(i,2);
}

printf("%d",sum_of_squares);

}