#include <stdio.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char word[100];
    int n;
    scanf("%s", word);
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====
    int i;

    //===== Write Your Logic Here =====
    for (i=0;i<n;i++)
    {printf("%c",word[i]);}


    return 0;
}