//===== Write Your Logic Here =====
#include<stdio.h>
int main(){

char string1[100],string2[100],string3[100];

fgets(string1,100,stdin);
fgets(string2,100,stdin);
fgets(string3,100,stdin);

printf("%c%c%c",string1[0],string2[0],string3[0]);

return 0;
}


