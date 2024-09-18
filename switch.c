#include<stdio.h>

int main(){
    char alphabet;
   
    printf("Enter any alphabet: ");
    scanf("%c",&alphabet);
    
    switch(alphabet){
        case 'a':
            printf("a is vowel\n");
            break;
        case 'e':
            printf("e is vowel\n");
            break;
        case 'i':
            printf("i is vowel\n");
            break;
        case 'o':
            printf("o is vowel\n");
            break;
        case 'u':
            printf("u is vowel\n");
            break;
        default:
            printf("not vowel\n");
            break;
    }
    // if(condition){
        
    // }else if(condition){
        
    // }

    /*
    Enter days of week (1 - 7):
    1 - sunday
    2- Monday
    3 - Tuesday
    4 - Wednesday
    5 - Thursday
    6 - Friday
    7 - Saturday
    default: Invalid days 
    */

    
    
}