#include<stdio.h>
#include<conio.h>
#include<unistd.h>
#define sycle 60
int main()
{
    int hour,minuite,second;
    printf("enter hour minuite second=");
    scanf("%d %d %d",&hour,&minuite,&second);
    system("CLS");
    int h=0,m=0,s=0;
    while(1)
    {
        printf("**************STOP WATCH**************\n");
        printf("          %.2d:%.2d:%.2d\n",h,m,s);
        printf("\n#######################################");
        if(h==hour&&m==minuite&&s==second)
        {
            break;
        }
        else
        {
            system("CLS");
        }
        s++;
        sleep(1);
        if(s==sycle)
        {
            m++;
            s=0;
        }
        if(m==sycle)
        {
            h++;
            m=0;
        }
    }
    getch();
}
