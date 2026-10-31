#include <stdio.h>
#include <string.h>
#include <ctype.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char s[100];
    scanf("%s", s);

    //===== Declare Local Variables / Functions here if required =====

    int count=0;
    int i = 0;


    //===== Write Your Logic Here =====
    
    for(i=0;i<100;i++)
    {if (s[i]!=0)
    count++;}
    for(i=0;i<count;i++)
    {
    if(s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'||s[i]=='0')
    printf("%c",s[i]);
    else continue;
    }

    return 0;
}