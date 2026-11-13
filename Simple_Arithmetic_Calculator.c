#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char op;
    int a, b;
    scanf(" %c", &op);
    scanf("%d", &a);
    scanf("%d", &b);

    //===== Declare Local Variables / Functions here if required =====



    //===== Write Your Logic Here =====

    switch(op){
        case '+': printf("%d",a+b); break;
        case '-': printf("%d",a-b); break;
        case '*': printf("%d",a*b); break;
        case '/': printf("%0.1f",(float)a/b); break;
        case '%': printf("%d",a%b); break;
    }

}