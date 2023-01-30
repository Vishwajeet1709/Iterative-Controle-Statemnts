//Write a program to print first n terms of fibonnaci series
#include<stdio.h>
int main()
{
    int n,i,a=1,b=1,fibo=0;
    printf("Enter a number to print N term of Fibonnaci series : ");
    scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
            if(i==1 || i==2)
                printf("1, ");
            else
            {
                fibo=a+b;
                a=b;
                b=fibo;
                printf("%d, ",fibo);
            }
        }

    return 0;
}
