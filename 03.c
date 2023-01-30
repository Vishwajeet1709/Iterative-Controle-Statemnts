//Write a program to check whether the given number is in fibonnaci series or not
#include<stdio.h>
int main()
{
    int n,flag=0,a=1,b=1,fibo=0;
    printf("Enter a number to check if it is in Fibonnaci series or not : ");
    scanf("%d",&n);

        while(n>fibo)
        {
            fibo=a+b;
            a=b;
            b=fibo;
            if(n==fibo)
            flag=1;
        }
        if(flag)
            printf("Yes %d is in fibonnaci series.",n);
        else
            printf("No %d is not in fibonnaci series.",n);
    return 0;
}
