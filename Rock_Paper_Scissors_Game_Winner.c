#include <stdio.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char abhinav_choice[20];
    char anjali_choice[20];

    //===== Declare Local Variables / Functions here if required =====


    scanf("%s", abhinav_choice);
    scanf("%s", anjali_choice);

    //====f= Write Your Logic Here =====

if (strstr(abhinav_choice,"Rock")&&strstr(anjali_choice,"Scissors"))
printf("Abhinav Wins");
else if (strstr(abhinav_choice,"Paper")&&strstr(anjali_choice,"Rock"))
printf("Abhinav Wins");
else if (strstr(abhinav_choice,"Scissors")&&strstr(anjali_choice,"Paper"))
printf("Abhinav Wins");

else if (strstr(anjali_choice,"Rock")&&strstr(abhinav_choice,"Scissors"))
printf("Anjali Wins");
else if (strstr(anjali_choice,"Paper")&&strstr(abhinav_choice,"Rock"))
printf("Anjali Wins");
else if (strstr(anjali_choice,"Scissors")&&strstr(abhinav_choice,"Paper"))
printf("Anjali Wins");

else printf("Tie");

}