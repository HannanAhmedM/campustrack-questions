#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char a[100], b[100], c[100];
    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);

    //===== Declare Local Variables / Functions here if required =====
    char d[100]={'w','o','m','a','n'};
    int i,z=0;
    //===== Write Your Logic Here =====
    
    if(strcmp(a,"woman")==0||strcmp(b,"woman")==0||strcmp(c,"woman")==0) z=1;
    else z=0;
    
    if (z==1) printf("True");

    else printf("False");

}