#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);
    int *numbers = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    //===== Declare Local Variables / Functions here if required =====


    int sum = 0;


    //===== Write Your Logic Here =====
for (int i=0;i<n;i++){
    if (numbers[i]>0)
    sum+=numbers[i];
    else continue;
}
printf("%d",sum);

}