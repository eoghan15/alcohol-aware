#include <stdlib.h>
#include<stdio.h>
#include<math.h>
// #include <conio.h>
#include <ctype.h>

typedef struct drinks
{
float dp,ds,da,drinker,price;
} drink_type;

//p=percentage ... s=size.... a =amount

int main()
{
    drink_type drinks[1000];
    int game,i;
    float diff,players,consumer1,consumer2,consumer3,consumer4,consumer5,loseraverage;
    char again,Y,y;
    
    
                        printf("welcome\nto\n'our programe'\n");
            playermenu: printf("\n\n");
                        printf("number of players (max 5):\n");
                        scanf("%1f",&players);
                        if(players==0)
                        {
                            goto playermenu;
                        }

                        for(i=1;i<(players+1);i++)
                        {
                        printf("\nPlease enter drink %d's percentage volume:\n",i);
                        scanf("%f",&drinks[i].dp);
                        printf("\nPlease enter drink %d's size(ml):\n",i);
                        scanf("%f",&drinks[i].ds);
                        printf("\nPlease enter how many of drink %d is to be consumed:\n",i);
                        scanf("%f",&drinks[i].da);
                        printf("\n\n**********\n\n");
                        }
                            
                            for(i=1;i<(players+1);i++)
                            {
                               drinks[i].drinker=(drinks[i].ds)*(drinks[i].da)*(drinks[i].dp/100);
                            }
                            for(i=1;i<(players+1);i++)
                            {
                               printf("\n%f\n",drinks[i].drinker);
                            }
                            i=1;
                            consumer1=drinks[i].drinker;
                            consumer2=drinks[i+1].drinker;
                            consumer3=drinks[i+2].drinker;
                            consumer4=drinks[i+3].drinker;
                            consumer5=drinks[i+4].drinker;
                            printf("\n%f\n%f\n%f\n%f\n%f\n",consumer1,consumer2,consumer3,consumer4,consumer5);
                        
                        
            printf("\n\n");
    
    menu:   printf("what game would you like to play?\n\ngame 1\ngame 2\ngame 3\ngame 4\n\n");
            printf("your choice:");
            scanf("%d", &game);
            printf("\n");
    
    if(game<5 && game>0)
    {
        if(game==1)
        {
                        printf("\n\nGAME 1:\n");
                        loseraverage=0;
                        if(players>1)
                        {   
                            if(consumer1>consumer2&&consumer1>consumer3&&consumer1>consumer4&&consumer1>consumer5)
                            {
                                printf("drinker %d is winning\n",i);
                                
                                loseraverage=((consumer5)+(consumer2)+(consumer3)+(consumer4))/(players-1);
                                diff=consumer1-loseraverage;
                                
                                printf("\nby an average difference of %.02f (ml) of alcohol\n", diff);
                                printf("end of programe!\n**********\n\n");
                            }
                            else if(consumer2>consumer3&&consumer2>consumer4&&consumer2>consumer5&&consumer2>consumer1)
                            {
                                printf("drinker %d is winning", i+1);
                                
                                loseraverage=((consumer1)+(consumer5)+(consumer3)+(consumer4))/(players-1);
                                diff=consumer2-loseraverage;
                                
                                printf("\nby an average difference of %.02f (ml) of alcohol\n", diff);
                                printf("end of programe!\n**********\n\n");
                                
                            }
                            else if(consumer3>consumer4&&consumer3>consumer5&&consumer3>consumer1&&consumer3>consumer2)
                            {
                                printf("drinker %d is winning", i+2);
                                
                                
                                loseraverage=((consumer1)+(consumer2)+(consumer5)+(consumer4))/(players-1);
                                diff=consumer3-loseraverage;
                                
                                printf("\nby an average difference of %.02f (ml) of alcohol\n", diff);
                                printf("end of programe!\n**********\n\n");
                                
                            }                        
                            
                            if (consumer4>0)
                            {
                             if(consumer4>consumer5&&consumer4>consumer3&&consumer4>consumer2&&consumer4>consumer1)
                            {
                                printf("drinker %d is winning", i+3);
                                
                                
                                loseraverage=((consumer1)+(consumer2)+(consumer3)+(consumer5))/(players-1);
                                diff=consumer4-loseraverage;
                                
                                printf("\nby an average difference of %.02f (ml) of alcohol\n", diff);
                                printf("end of programe!\n**********\n\n");   
                            }
                            } 
                            
                            if(consumer5>0)
                            {
                                if(consumer5>consumer1&&consumer5>consumer2&&consumer5>consumer3&&consumer5>consumer4)
                                {
                                    printf("drinker %d is winning", i+4);
                                    
                                    loseraverage=((consumer1)+(consumer2)+(consumer3)+(consumer4))/(4);
                                    diff=consumer5-loseraverage;
                                    
                                    printf("\nby an average difference of %.02f (ml) of alcohol\n", diff);
                                    printf("end of programe!\n**********\n\n");
                                }
                            }
                            
                            if(players==5&&(consumer1==consumer2)&&(consumer1==consumer3)&&(consumer1==consumer4)&&(consumer1==consumer5))
                            {
                                        printf("draw\n\n");
                                        printf("end of programe!\n**********\n\n");
                            }
                            
                            if(players==4&&(consumer1==consumer2)&&(consumer1==consumer3)&&(consumer1==consumer4))
                            {
                                    printf("draw\n\n");
                                    printf("end of programe!\n**********\n\n");
                            }
                            
                            if(players==3&&(consumer1==consumer2)&&(consumer1==consumer3))
                            {
                                    printf("draw\n\n");
                                    printf("end of programe!\n**********\n\n");
                            }
                            
                            if(players==2&&(consumer1==consumer2))
                            {
                                    printf("draw\n\n");
                                    printf("end of programe!\n**********\n\n");
                            }
                                
                            else if((consumer1)==(consumer2))
                                {
                                    printf("draw between 1 and 2\n\n");
                                    printf("end of programe!\n**********\n\n");
                                } 
                            else if((consumer1)==(consumer3))
                                {
                                    printf("draw between 1 and 3\n\n");
                                    printf("end of programe!\n**********\n\n");
                                } 
                            else if((consumer1)==(consumer4))
                                {
                                    printf("draw between 1 and 4\n\n");
                                    printf("end of programe!\n**********\n\n");
                                }
                            else if((consumer1)==(consumer5))
                                {
                                    printf("draw between 1 and 5\n\n");
                                    printf("end of programe!\n**********\n\n");
                                } 
                            else if((consumer2)==(consumer3))
                                {
                                    printf("draw between 2 and 3\n\n");
                                    printf("end of programe!\n**********\n\n");
                                } 
                            else if((consumer2)==(consumer4))
                                {
                                    printf("draw between 2 and 4\n\n");
                                    printf("end of programe!\n**********\n\n");
                                } 
                            else if((consumer2)==(consumer5))
                                {
                                    printf("draw between 2 and 5\n\n");
                                    printf("end of programe!\n**********\n\n");
                                } 
                            else if((consumer3)==(consumer4))
                                {
                                    printf("draw between 3 and 4\n\n");
                                    printf("end of programe!\n**********\n\n");
                                }
                            else if((consumer3)==(consumer5))
                                {
                                    printf("draw between 3 and 5\n\n");
                                    printf("end of programe!\n**********\n\n");
                                }
                            else if((consumer4)==(consumer5))
                                {
                                    printf("draw between 4 and 5\n\n");
                                    printf("end of programe!\n**********\n\n");
                                }
                                
                        }
                        else if(players==1)
                        {
                            printf("\nyou have drank of %.02f (ml) of alcohol\n", consumer1);
                            //you are milled etc.. compare against 6 cans, shoulder... etc
                            printf("end of programe!\n**********\n\n");
                        }
                        
                        printf("Do you want to go again? (Y/N): ");
                        again = getche();
                      
                        if(again=='Y'||again=='y') 
                        {
                            printf("\n\n\n **************** \n\n\n******** STARTING AGAIN!! ********\n\n\n");
                            goto playermenu;
                        }
                                                    
            
            return (EXIT_SUCCESS);
        }
        
    }
    
        
    
        else if(game==2)
        {
            float value1,value2,value3,value4,value5;
            loseraverage=0;
            printf("\n\nGAME 2:\n");
                         
                        for(i=1;i<(players+1);i++)
                        {
                            printf("\nPlease enter the drink %d's price:\n",i);
                            scanf("%f",&drinks[i].price);
                        }
                        
                        value1=(drinks[i].price/consumer1);
                        value2=(drinks[i+1].price/consumer2);
                        value3=(drinks[i+2].price/consumer3);
                        value4=(drinks[i+3].price/consumer4);
                        value5=(drinks[i+4].price/consumer5);
                        
                        if(players>1)
                        {   
                            if(value1<value2&&value1<value3&&value1<value4&&value1<value5)
                            {
                                printf("drinker %d is paying the least (per ml of alcohol)\n",i);
                                loseraverage=((value5)+(value2)+(value3)+(value4))/(players-1);
                                diff=value1-loseraverage;
                                printf("\nby an average difference of €%.02f (per ml of alcohol)\n", diff);
                                printf("end of programe!\n**********\n\n");
                            }
                            else if(value2<value1&&value2<value3&&value2<value4&&value2<value5)
                            {
                                printf("drinker %d is paying the least (per ml of alcohol)\n", i+1);
                                loseraverage=((value1)+(value5)+(value3)+(value4))/(players-1);
                                diff=value2-loseraverage;
                                printf("\nby an average difference of €%.02f (per ml of alcohol)\n", diff);
                                printf("end of programe!\n**********\n\n");
                                
                            }
                            else if(value3<value1&&value3<value2&&value3<value4&&value3<value5)
                            {
                                printf("drinker %d is paying the least (per ml of alcohol)\n", i+2);
                                loseraverage=((value1)+(value2)+(value5)+(value4))/(players-1);
                                diff=value3-loseraverage;
                                printf("\nby an average difference of €%.02f (per ml of alcohol)\n", diff);
                                printf("end of programe!\n**********\n\n");
                                
                            }                        
                            
                            if (price4>0)
                            {
                             if(value4<value1&&value4<value2&&value4<value3&&value4<value5)
                            {
                                printf("drinker %d is paying the least (per ml of alcohol)\n", i+3);
                                loseraverage=((value1)+(value2)+(value3)+(value5))/(players-1);
                                diff=value4-loseraverage;
                                printf("\nby an average difference of €%.02f (per ml of alcohol)\n", diff);
                                printf("end of programe!\n**********\n\n");   
                            }
                            } 
                            
                            if(price5>0)
                            {
                                if(value5<value1&&value5<value2&&value5<value3&&value5<value4)
                                {
                                    printf("drinker %d is paying the least (per ml of alcohol)\n", i+4);
                                    loseraverage=((value1)+(value2)+(value3)+(value4))/(4);
                                    diff=value5-loseraverage;
                                    printf("\nby an average difference of €%.02f (per ml of alcohol)\n", diff);
                                    printf("end of programe!\n**********\n\n");
                                }
                            }
                            
                            if(players==5&&(value1==value2)&&(value1==value3)&&(value1==value4)&&(value1==value5))
                            {
                                        printf("draw\n\n");
                                        printf("end of programe!\n**********\n\n");
                            }
                            
                            if(players==4&&(value1==value2)&&(value1==value3)&&(value1==value4))
                            {
                                    printf("draw\n\n");
                                    printf("end of programe!\n**********\n\n");
                            }
                            
                            if(players==3&&(value1==value2)&&(value1==value3))
                            {
                                    printf("draw\n\n");
                                    printf("end of programe!\n**********\n\n");
                            }
                            
                            if(players==2&&(value1==value2))
                            {
                                    printf("draw\n\n");
                                    printf("end of programe!\n**********\n\n");
                            }
                                
                            else if(value1==value2)
                                {
                                    printf("draw between 1 and 2\n\n");
                                    printf("end of programe!\n**********\n\n");
                                } 
                            else if(value1==value3)
                                {
                                    printf("draw between 1 and 3\n\n");
                                    printf("end of programe!\n**********\n\n");
                                } 
                            else if(value1==value4)
                                {
                                    printf("draw between 1 and 4\n\n");
                                    printf("end of programe!\n**********\n\n");
                                }
                            else if(value1==value5)
                                {
                                    printf("draw between 1 and 5\n\n");
                                    printf("end of programe!\n**********\n\n");
                                } 
                            else if(value2==value3)
                                {
                                    printf("draw between 2 and 3\n\n");
                                    printf("end of programe!\n**********\n\n");
                                } 
                            else if(value2==value4)
                                {
                                    printf("draw between 2 and 4\n\n");
                                    printf("end of programe!\n**********\n\n");
                                } 
                            else if(value2==value5)
                                {
                                    printf("draw between 2 and 5\n\n");
                                    printf("end of programe!\n**********\n\n");
                                } 
                            else if(value3==value4)
                                {
                                    printf("draw between 3 and 4\n\n");
                                    printf("end of programe!\n**********\n\n");
                                }
                            else if(value3==value5)
                                {
                                    printf("draw between 3 and 5\n\n");
                                    printf("end of programe!\n**********\n\n");
                                }
                            else if(value4==value5)
                                {
                                    printf("draw between 4 and 5\n\n");
                                    printf("end of programe!\n**********\n\n");
                                }
                                
                        }
                        else if(players==1)
                        {
                            printf("\nyou have paid €%.02f (per ml of alcohol)\n", consumer1);
                            
                            printf("end of programe!\n**********\n\n");
                        }
                        
                        printf("Do you want to go again? (Y/N): ");
                        again = getche();
                      
                        if(again=='Y'||again=='y') 
                        {
                            printf("\n\n\n **************** \n\n\n******** STARTING AGAIN!! ********\n\n\n");
                            goto playermenu;
                        }  
                        
        }
        
        else if(game==3)
        {
            printf("game 3");
        }
        
        else if(game==4)
        {
            printf("game 4");
        }
    
        
    else
    {
        printf("\n******\n!!!GO AGAIN!!!\n******\n\n");
        goto menu;
    }
    

return (EXIT_SUCCESS);
}



