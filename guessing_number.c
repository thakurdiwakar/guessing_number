#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguess=1;
    srand(time(0));
    number=rand()%100+1; //Its  generates the number between 1 to 100
    // printf("The number is %d",number );
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
         if (guess>number)
           
         {
             printf("Enter Lower number please\n");
         }
         else if (guess<number)
         {
            printf("Enter greater number please!\n");
         }
         else
         {
             printf("You guessed the number in %d attempts\n",nguess);
         }
         
    nguess++;
    } while (guess!=number);
    
    return 0;
}