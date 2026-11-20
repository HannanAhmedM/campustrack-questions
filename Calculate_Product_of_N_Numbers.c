#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int N;
    scanf("%d", &N);

    //===== Declare Local Variables / Functions here if required =====

int prod=1;
    int numbers[N];

    for (int i = 0; i < N; ++i) {
        scanf("%d", &numbers[i]);
    }

    //===== Write Your Logic Here =====
for (int i=0;i<N;i++){
    prod*=numbers[i];
}

printf("%d",prod);

    return 0;
}