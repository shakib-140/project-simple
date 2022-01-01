#include<stdio.h>
#include<conio.h>
int nob=0,nor=0,noc=0,count=0,amount=0;
void function1()
{

    nor++;
    count++;
    amount=amount+50;

}
void function2()
{
    noc++;
    count++;
    amount=amount+20;
}
void function3()
{
    nob++;
    count++;
    amount=amount+100;
}
void function4()
{
    printf("\n\n--------WELCOME TO DELTA'S GARRAGE--------\n\n\n");
    printf("number of rickshaws=%d\n",nor);
    printf("number of cycles=%d\n",noc);
    printf("number of buses=%d\n",nob);
    printf("number of vehicles=%d\n",count);
    printf("total amount=%d\n",amount);

}
void function5()
{
    nob=0;
    nor=0;
    noc=0;
    count=0;
    amount=0;
}

int main()
{
    int choice;
    while(1)
    {

        printf("1:entry a rickshaw\n");
        printf("2:entry a cycle\n");
        printf("3:entry a bus\n");
        printf("4:show details\n");
        printf("5:delete data\n");
        printf("6:exit\n");
        printf("enter your choice=");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
        {

            function1();
            printf("rickshaw entry successfully\n");
            sleep(1);
            system("CLS");
            break;
        }
        case 2:
        {
            function2();
            printf("cycle entry successfully\n");
            sleep(1);
            system("CLS");

            break;
        }
        case 3:
        {
            printf("bus entry successfully\n");
            sleep(1);
            system("CLS");
            function3();
            break;
        }
        case 4:
        {
            function4();
        }
        case 5:
        {
            function5();
        }
        case 6:
        {
            exit(0);
        }

        }
    }

    getch();
}
