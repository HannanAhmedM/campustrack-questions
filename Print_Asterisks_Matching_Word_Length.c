#include <stdio.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char word[1000];
    scanf("%s", word);

    //===== Declare Local Variables / Functions here if required =====

    int len;
    //===== Write Your Logic Here =====
    len=strlen(word);

    for (int i=0;i<=len-1;i++){
        printf("*");
    }

}