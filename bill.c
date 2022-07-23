#include<stdio.h>
#include<conio.h>
void main()
{
    int unit;
    char a;

    printf("Enter the character C or R:");
    scanf("%c",&a);
    printf("Enter the unit:");
    scanf("%d",&unit);
    
    if (a=='c' || a=='C')
    {
        if(unit>=0 && unit<=250)
        {
            unit=unit*2;
            printf("The bill is:%d",unit);
        }
        else if (unit>=251 && unit<=750)
        {
            unit=unit*5;
            printf("The bill is:%d",unit);
        }
        else
        {
            unit=unit*10;
            printf("the bill is:%d",unit);
        }
    }
    else if (a=='r' || a=='R')
        {
        if(unit>=0 && unit<=250)
        {
            unit=unit*5;
            printf("The bill is:%d",unit);
        }
        else if (unit>=251 && unit<=750)
        {
            unit=unit*8;
            printf("The bill is:%d",unit);
        }
        else
        {
            unit=unit*12;
            printf("the bill is:%d",unit);
        }
    }
 
    getch();
}