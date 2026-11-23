#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    //===== Declare Local Variables / Functions here if required =====

int a=0,count=0;
    int index = -1;
    int i = 0;


    if ((read = getline(&line, &len, stdin)) != -1) {

        //===== Write Your Logic Here =====
for (i=0;i<read;i++){
    if (line[i]=='8'){
        a=1;
        break;
    }
    if (i<read-1){
    if (line[i]!=' '&&line[i+1]==' ') count++;}
}

if (a==1) printf("%d",count);
else printf("-1");
    }

    //===== Write Your Logic Here =====


}