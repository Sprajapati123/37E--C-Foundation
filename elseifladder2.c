#include<stdio.h>

int main(){
    int days;

    printf("Enter days between 1 and 7:");
    scanf("%d",&days);

    if(days == 1){
        printf("Sunday");
    }else if(days == 2){
        printf("Monday");
    }else if(days == 3){
        printf("Tuesday");
    }else if(days == 4){
        printf("Wednesday");
    }else if(days == 5){
        printf("Thursday");
    }else if(days == 6){
        printf("Friday");
    }else if(days == 7){
        printf("Saturday");
    }else{
        printf("Invalid input");
    }
}