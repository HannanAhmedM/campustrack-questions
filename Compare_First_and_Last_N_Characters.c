#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char string_input[100];
    int integer_input;

    //===== Declare Local Variables / Functions here if required =====
char a[100],b[100];

    fgets(string_input, sizeof(string_input), stdin);
    string_input[strcspn(string_input, "\n")] = 0;
    scanf("%d", &integer_input);

    //===== Write Your Logic Here =====
int m=strlen(string_input);
int n=integer_input,z;
for (int i=0;i<=n-1;i++){
    if (string_input[i]!=string_input[i+m-n])
        {z=0; break;}
    else z=1;
}



if(z==1) printf("False");
else printf("True");

}