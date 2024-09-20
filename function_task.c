#include <stdio.h>

//function declaration
int addition(int,int);
int subtraction(int,int);
void multiplication(int,int);

int main(){
    int first,second,choice;
    int i = 1;
    while(i){
        
    printf("Choose\n");
    printf("1.Addition 2.Subtraction 3.Multiplication\n");
    scanf("%d",&choice);
    
    if(choice <= 3 && choice > 0 ){
        printf("Enter first number: ");
        scanf("%d",&first);
        printf("Enter second number: ");
        scanf("%d",&second);
    }else{
        printf("Invalid choice");
    }

    if(choice == 1){
        int sum = addition(first,second);
        printf("The sum is %d\n",sum);
    }else if(choice == 2){
        int sub = subtraction(first,second);
            printf("The subtraction is %d\n",sub);
    }else if(choice == 3){
         multiplication(first,second);
    }else{}
    }
}

int addition(int a,int b){
    return a+b;
}

int subtraction(int a,int b){
    return a-b;
}

void multiplication(int a,int b){
    printf("The multiplication is %d\n",a*b);
}