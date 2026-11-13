#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int d;
    scanf("%d", &d);

    //===== Declare Local Variables / Functions here if required =====
int a;

    //===== Write Your Logic Here =====
if (d>=0&&d<=40)
{a=d*2;
 printf("%d",a+50);}
else if (d>=41&&d<=60)
{a=80+((d-40)*4); printf("%d",a+50);}
else if (d>=61&&d<=120){
a=160+((d-60)*6); printf("%d",a+50);}
else
{a=520+((d-120)*8); printf("%d",a+50);}

}