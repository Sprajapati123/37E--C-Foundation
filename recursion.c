// Online C compiler to run C program online
#include <stdio.h>

//Recursion
void display(int a);
int main() {
    int i = 3;
    display(i);
    return 0;
}
void display(int a){
    if(a == 0){
        return;
    }else{
        
        display(a-1);
        printf("%d",a);
    }
}