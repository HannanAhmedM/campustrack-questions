#include <stdio.h>
#include <string.h>
#include <ctype.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char s[1000];
    scanf("%s", s);

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====

int len=strlen(s);

for (int i=0;i<len;i++){
    s[i]=toupper((unsigned char)s[i]);

    printf("%c",s[i]);
    
    if(i<len-1) printf("-");
}

}