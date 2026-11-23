#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char *s = NULL;
    size_t len = 0;
    getline(&s, &len, stdin);
    if (s[strlen(s)-1] == '\n') {
        s[strlen(s)-1] = 0;
    }

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
int z=strlen(s);

for (int i=z-1;i>=0;i--){
    printf("%c\n",s[i]);
}

}