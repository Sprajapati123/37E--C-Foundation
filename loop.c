    #include<stdio.h>

    int main(){
        
        int number;
        
        printf("Enter any number: ");
        scanf("%d",&number);
        
        for(int i = 1;i<=100;i++){
            // 10 * 1 = 10
            if(i%2 == 0){
                printf("%d\n",i);
            }
            if(i == 16){
                break;
            }
        }
        /*
        1
        2
        3
        4
        5
        6
        7
        8
        9
        10
        */
        /*
        
        Enter any number: 10
        10 * 1 = 10
        10 * 2 = 20
        10 * 3 = 30
        10 * 4 = 40
        10 * 5 = 50
        */
    //   for(int i = 1;i<=10;i++){
    //       printf("%d",i);
    //   }
        /*
        for(initialization;terminate condition;increment/decrement){
            statement;
        }
        */
       
    }