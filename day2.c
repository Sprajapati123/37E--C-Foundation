#include <stdio.h>

void sum(int a, int b);
int main(){
      //makes variable read-only
        // const int c = 50;
      

        // printf("%d", c);
    
   /*
   1. Cannot use keyword - 32 keywords
   2. cannot start with numeric values - 1a,2a
   3. cannot use blank space and comma (,)
   4. cannot use special character (%,&,^) 
        except underscore(_)
    5. case sensitive (A and a are different)
    6. variable must be unique.

    apple and APPLE are different
    
  
   */

   //Data types
   //int - 50, 100, 20
   //double - 50.205
   //float - 50.205
   //char - "M"

   //void


 /*
    format specifier
    int - "%d"
    float - "%f"
    char - "c"

    
   int a = 9;
    int x = 10;
    int y = 20;

    float b = 2.5;

    char c = "M";

    printf("%d,%f,%c",a,b,c);


    */


//   int a;
//   int b;
//   printf("Enter first number: ");
//   //scanf is used for user input
//   scanf("%d",&a);
  
//   printf("Enter second number: ");
//   scanf("%d",&b);
  
//   int c = a+b;

//   printf("The sum is %d",c);

sum(10,20);
   
}

void sum(int a, int b){
    int c = a+b;
    printf("The sum is %d",c);
}
