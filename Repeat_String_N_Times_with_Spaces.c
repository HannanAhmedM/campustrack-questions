#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char stringVal[100];
    int integerVal;

    fgets(stringVal, sizeof(stringVal), stdin);
    stringVal[strcspn(stringVal, "\n")] = 0;
    scanf("%d", &integerVal);

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
for (int i=0;i<integerVal;i++){
    fputs(stringVal,stdout);

    if (i<integerVal-1) printf(" ");
}

}