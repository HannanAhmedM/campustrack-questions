#include <stdio.h>

//===== Declare Imports here if required =====
#include <math.h>

//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====
    float a;
    int sum=0;
    //===== Write Your Logic Here =====
    for (int i=0;i<=n;i++){
        sum+=i;
    }

    a=(float)sum/n;

    printf("%0.1f",a);

}