#include<stdio.h>
#include<stdlib.h>
int main(){
    int user_input,computer_input,limit=0;
    int your_score=0,computer_score=0,match_draw=0;
    int i,c;
    int playing;
     printf("************************* ---ROCK - PAPER - SCISSOR - GAME--- *********************************************\n");
     printf("\n*--------**ATTENTION WE ARE GOING TO PLAY THE ROCK-PAPER-SCISSOR GAME**----------------*\n");
    printf("\n");
    
    printf("------>>ENTER HOW MANY MATCHES YOU WANT TO PLAY:\n ");
    scanf("%d",&limit);
   printf("You choose %d matches\n",limit);
  
  
    printf("DO YOU WANT TO PLAY- \nENTER= 0-Start\t1-Exit\n");
    scanf(" %d",&playing);
    if(playing==0){
    
     for (i=1;i<=limit;i++){   
        c=0;
        label:
        printf("--->>Enter 0-ROCK\n--->>Enter 1-PAPER\n--->>Enter2-SCISSOR\n");
        printf("--->>It's your turn:\n");
        scanf("%d",&user_input);
        fflush(stdin);
        printf("-->>User input is:%d\n",user_input);
       switch( user_input){
        case 0:
        printf("-->>You choosed ROCK\n");
        break;
        case 1:
        printf("-->>You choosed PAPER\n");
        break;
        case 2:
        printf("-->>You choosed SCISSOR\n");
        break;
        default:
        printf("-->>Invalid Input!,Please select correct choice.\n");
        c=1;
          }
          if(c==1){
           goto label;
          }
       if(c!=1){
        int computer_input=rand()%(2-0+1)+0;
       //formula for random=rand()%(upper-lower+1)+lower;
       printf("%d\n",computer_input);
        switch(computer_input){
        case 0:
        printf("-->>Computer choosed ROCK\n");
        break;
        case 1:
        printf("-->>Computer choosed PAPER\n");
        break;
        case 2:
        printf("-->>Computer choosed SCISSOR\n");
        break;
       }
        if(user_input==computer_input){
           printf("MATCH DRAWN!\n");
         match_draw++;
          }
          else if ((user_input==0&&computer_input==2)||(user_input==1&&computer_input==0)||(user_input==2||computer_input==1)){
           printf("YOU WON !\n");
           your_score++;
     }
      else{
           printf("YOU LOSE!,BETTER LUCK NEXT TIME!\n");
          computer_score++;
         
      }
      printf(" Your_Score=%d\n Computer_Score=%d\n Match_Draw=%d\n",your_score,computer_score,match_draw);
      }
      
   }
   }
}
  
