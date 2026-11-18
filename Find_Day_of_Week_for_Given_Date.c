#include <stdio.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char day[20];
    int n;
    scanf("%s", day);
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====

int a,daynum,weeks;
    //===== Write Your Logic Here =====
if (strcmp(day,"Monday")==0) daynum=1;
else if (strcmp(day,"Tuesday")==0) daynum=2;
else if (strcmp(day,"Wednesday")==0) daynum=3;
else if (strcmp(day,"Thursday")==0) daynum=4;
else if (strcmp(day,"Friday")==0) daynum=5;
else if (strcmp(day,"Saturday")==0) daynum=6;
else daynum=7;

a=n+daynum;
a--;
weeks=a%7;




if (weeks==1) printf("Monday");
else if (weeks==2) printf("Tuesday");
else if (weeks==3) printf("Wednesday");
else if (weeks==4) printf("Thursday");
else if (weeks==5) printf("Friday");
else if (weeks==6) printf("Saturday");
else printf("Sunday");
}