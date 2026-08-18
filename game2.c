//stone,paper,scissor.

 #include <stdio.h>
       #include <stdlib.h>
       #include <time.h>

        int main()
        { 
            srand(time(0));
//1=stone, 2=paper,3=scissor.
            int random_num =(rand() %3)+1;
        
  int i;
   scanf("%d",&i);
            
            printf("computer:", random_num);
            if(random_num==1){
                printf("stone");
            }
             if(random_num==2){
                printf("paper");
            } 
            if(random_num==3){
                printf("scissor");
            }
            printf("\n");
            printf("you:");
             if(i==1){
                printf("stone");
            }
             if(i==2){
                printf("paper");
            }
             if(i==3){
                printf("scissor");
            }
            printf("\n");
             
            if(random_num==i){
                printf("game is tie!!");
            }
            if(random_num==1 &&i==2){
                printf("you win!!");
            }
            if(random_num==1 &&i==3){
                printf("computer win!!");
            }
            if(random_num==2 &&i==1){
                printf("computer win!!");
            }
            if(random_num==2 &&i==3){
                printf("you win!!");
            }
            if(random_num==3 && i==1){
                printf("you win!!");
            }
            if(random_num==3 &&i==2){
                printf("computer win!!");
            }
         return 0;
        }