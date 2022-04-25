#include<stdio.h>
#include<stdlib.h>

int main()
{
    srand(time(0));
    int hidden=rand()%100+1;
    //printf("%d",hidden);
    printf("\n");
    int guess;
    int life=0;

    while(life<10)
    {
        scanf("%d",&guess);

        if(guess==hidden)
        {
            printf("you are wright");
            break ;
        }
        else if(guess>hidden)
        {
            printf("guess smaller\n");
        }
        else
        {
            printf("guess larger\n");
        }
        life++;
    }
    if(life==10)
        printf("you are fail");

    return 0;
}
