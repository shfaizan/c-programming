#include<stdio.h>
int main()
{
    int hours;
    printf("--------Hey check your study status--------------");
    printf("\nPlease enter hours you spend with learning new things in a day:");
    scanf("%d",&hours);
    if(hours>24)
    {
        printf("\nhey you can not study more than 24 hours a day fool\n");
    }
    else if(hours<=0)
    {
        printf("\n Seriously!!! --you should learn \n");
    }
    else if(hours>1 && hours<5 )
    {
        printf("you are Average");
    }
    else if(hours>4 && hours<13 )
    {
        printf("WOW you are hardworking guy");
    }
    else if(hours>12 && hours<20 )
    {
        printf("wow you are super human");
    }
    else
    {
        printf("nope you are alien ");
    }
}
