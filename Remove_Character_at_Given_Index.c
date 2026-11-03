#include <stdio.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char word[100];
    int index;

    //===== Declare Local Variables / Functions here if required =====
int count=0;

    scanf("%s", word);
    scanf("%d", &index);

    //===== Write Your Logic Here =====
word[index]=0;
for(int i=0;i<=100;i++){
    if (word[i]!=0) count++;
}
for (int i=index;i<=100;i++){
    word[i]=word[i+1];}

for (int i=0;i<=count-1;i++){
    printf("%c",word[i]);
}

}