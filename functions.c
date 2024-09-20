// Online C compiler to run C program online
#include <stdio.h>

int xyz = 10;
//function declaration
void display();

void greet();
void addition(int,int);
int subtraction()
int sum(int,int);

int main() {
    int x = 10;
    //calling function
    display();
    greet();
    
    addition(10,20);

    int c = subtraction();

    int d = sum(10,10);

    printf("%d",c);
    return 0;
}

int sum(int a,int b){
    int a = 10;
    return a+b;
}

int subtraction(){
    printf("%d",a)
    return 15;
}
//function defination
void display(){
    printf("Hello world\n");
}

void greet(){
    printf("Good Afternoon")
}

void addition(int a,int b){
    printf("The sum is %d",a+b);
}
/*
 1. Function with no parameter no return type
 2. Function with parameter but no return type
 3. Function with no parameter but return type
 4. Function with parameter and return type
*/