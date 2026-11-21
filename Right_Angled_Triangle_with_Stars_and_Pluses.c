#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
for (int i=0;i<n-1;i++){
    for (int j=0;j<=i;j++){
        printf("* ");
    }
    printf("\n");
}
for (int i=0;i<=n-1;i++){
    printf("+ ");
}

}