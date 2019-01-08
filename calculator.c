#include<stdio.h>
int main()
{
    int a,b,add,sub,mul,div,rem;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    rem=a%b;
    printf("\nADD:%d\tSUB:%d\tMUL:%d\tDiv:%d\tRemainder:%d",add,sub,mul,div,rem);
    return 0;
}
