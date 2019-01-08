#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter number:");
    scanf("%d",&num);
    if(num<10)
    {
        for(i=0;i<num;i++)
        {
            printf("\nI am groot");
        }
    }
    else
    {
        for(i=0;i<num;i++)
        {
            printf("\nI am ROOT");
        }
    }
    return 0;
}
