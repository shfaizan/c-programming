#include<stdio.h>
int main()
{
    int jump;
    printf("How many times can you jump:");
    scanf("%d",&jump);
    do
    {
        printf("\n------JUMP MORE ---------");
    }
    while(jump<100);
    // Unlike the while loop even if we jump more than 100 times it will show us to jump more because do statement is already executed and the loop is break when it encounter the while condition
    printf("You are Strong!");
    return 0;
}
