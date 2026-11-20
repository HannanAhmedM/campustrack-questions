#include <stdio.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char s[1000];
    scanf("%[^\n]", s);

    //===== Declare Local Variables / Functions here if required =====

    int i,count=0;
    //===== Write Your Logic Here =====
    count=strlen(s);
    for(i=0;i<=count-1;i++){
        printf("%c\n",s[0]);
    }

    return 0;
}