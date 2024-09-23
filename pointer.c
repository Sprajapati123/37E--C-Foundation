#include<stdio.h>
//Pointer
//Recursion

int calculate(int *salary);

int main(){
    int salary;
    int *ptr = &salary;
    printf("Enter salary: ");
    scanf("%d",ptr);
    
    printf("Your original salary is %d\n",*ptr);
    
    int new = calculate(ptr);
    printf("Your new salary is %d",new);
    
}

int calculate(int *salary){
    return *salary * 2;
}

