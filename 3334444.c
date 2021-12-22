#include<stdio.h>
#include<conio.h>
int n,i,j,count=1;

struct information
{
    char name[34];
    int id;
    int password;
    int sub1;
    int sub2;
    int sub3;

};

int main()
{
    printf("enter the number  of person=");
    scanf("%d",&n);
    struct information person[n];
    int sum[n];
    for(i=0; i<n; i++)
    {
        printf("enter the name of person[%d]:",i);
        scanf("%s",&person[i].name);
        printf("enter the id of person[%d]:",i);
        scanf("%d",&person[i].id);
        printf("enter the password of person[%d]:",i);
        scanf("%d",&person[i].password);
        printf("enter the mark of person[%d] sub1:",i);
        scanf("%d",&person[i].sub1);
        printf("enter the mark of person[%d] sub2:",i);
        scanf("%d",&person[i].sub2);
        printf("enter the mark of person[%d] sub3:",i);
        scanf("%d",&person[i].sub3);
        printf("\n\n");

    }
    for(i=0; i<n; i++)
    {
        sum[i]=(person[i].sub1+person[i].sub2+person[i].sub3);

    }
    int max=sum[0];
    for(j=1; j<n; j++)
    {
        if(max<sum[j])
        {
            max=sum[j];

        }
        count++;


    }
    for(i=0; i<n; i++)
    {
        printf(" sum mark of peron[%d]=",i);
        printf("%d\n",sum[i]);
    }
    printf("the topper number is =%d\n",max);
    printf("his/her name is=%s",person[count].name);


    getch();
}
