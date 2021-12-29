#include<stdio.h>
#include<conio.h>
int main()
{
    int getfirstdayoftheyear(int year)
    {
        int day=((year*365 +(year-1)/4)-((year-1)/100) +((year-1)/400) )%7;
        return day;
    }
    char *name[]= {"january","february","march","april","may","june","july","august","september","october","nobember","december"};
    int daysmonth[]= {30,28,31,30,31,30,31,31,30,31,30,31};
    int weekday=0,year;
    printf("ENTRE YOUR FAVOURITE YEAR=");
    scanf("%d",&year);
    if(year%400==0||year%100!=0&&year%4==0)
    {
        daysmonth[1]=29;
    }
    weekday=getfirstdayoftheyear(year);
    printf("\n\n\n-----------------------WELCOME TO %d-------------------------\n\n",year);
    for(int i=0; i<12; i++)
    {
        printf("\n........................%s.........................\n\n",name[i]);
        printf("     sat    sun    mon    tues    wed   thu    fri");
        printf("\n");
        for(int spacecounter=1; spacecounter<=weekday; spacecounter++)
        {
            printf("       ");
        }
        int totaldays=daysmonth[i];
        for(int j=1; j<=totaldays; j++)
        {
            printf("%7d",j);
            weekday++;
            if(weekday>6)
            {
                weekday=0;
                printf("\n");
            }
        }
        printf("\n\n\n");
    }
    getch();
}
