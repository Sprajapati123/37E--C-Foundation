#include <stdio.h>

int main(){
    int marks;

    printf("Enter marks:");
    scanf("%d",&marks);
    //75
    if(marks >=90){
        printf("Congratulations,Grade A+");
    }else if(marks >=80 && marks <90){
        printf("Congratulations,Grade A");
    }else if(marks>=70 && marks <80){
        printf("Grade B+");
    }else if(marks >=60 && marks <70){
        printf("Grade B");
    }else if(marks >=50 && marks <60){
        printf("Grade C");
    }else{
        printf("fAILED");
    }

}