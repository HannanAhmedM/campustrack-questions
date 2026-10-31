#include <stdio.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char s[1000];
    scanf("%s", s);

    //===== Declare Local Variables / Functions here if required =====

    int n,i;
    //===== Write Your Logic Here =====
    int count=strlen(s);

    n=count/2;
    for(i=0;i<n;i++)
    {printf("%c",s[i]);}


    return 0;
}