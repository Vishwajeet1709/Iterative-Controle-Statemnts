//Write a program to print fibonnaci series of Nth term
#include<stdio.h>
int main()
{
    int n,i,a=1,b=2,fibo=0;
    printf("Enter a number to print Nth term of Fibonnaci series : ");
    scanf("%d",&n);

//print 1 if user has entered 1 or 2
    if(n==1 || n==2)
        printf("Nth term is 1.");
    else
    {
        for(i=3;i<n;i++)
        {
            fibo=a+b;
            a=b;
            b=fibo;
        }
        printf("Nth term is %d.",fibo);

    }
    return 0;
}
