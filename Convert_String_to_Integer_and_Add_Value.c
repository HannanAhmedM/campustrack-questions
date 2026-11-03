#include <stdio.h>

//===== Declare Imports here if required =====

#include <stdlib.h>
//===== Declare Global Variables / Functions here if required =====


int main() {
    char s[100];
    scanf("%s", s);

    //===== Declare Local Variables / Functions here if required =====

long int i,sum=0;
    //===== Write Your Logic Here =====
 sum=atoi(s);

printf("%ld",sum+10);

    return 0;
}